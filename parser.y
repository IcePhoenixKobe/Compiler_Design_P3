/*
	File description: a yacc file for course 
	NTUST 2020 Spring Compiler Design Project3.

	Information: This version can not use 
	relation operation to be the value that be 
	assigned.

	coder: Kobe (LIN GENG-SHEN)
	Date: 2020/06/08 01:45
*/
%{
#include"symbolTable.hpp"

using namespace std;

extern FILE* yyin;
extern unsigned int linenumber;

#ifdef __cplusplus
extern "C" {
#endif
	void yyerror(const char*);
	int yylex(void);
#ifdef __cplusplus
}
#endif

%}

%union
{
	int i_value;
	double d_value;
	char* s_value;
	int type;	// 0: void, 1: int, 2: char, 3: float, 4: string, 5: boolean
};

/* tokens */
%token <s_value> ID BIOP
/* reversed words */
%token BREAK CASE CLASS CONTINUE DEF DO ELSE EXIT FOR IF NULL_SCALA OBJECT PRINT PRINTLN READ REPEAT RETURN TO TYPE VAL VAR WHILE TRUE FALSE
/* data type */
%token <i_value> INT
%token CHAR
%token <d_value> FLOAT
%token <s_value> STRING
%token <b_value> BOOLEAN

/* Nonterminals */
%type <type> data type
%type <type> expression_list expression boolean_expression bool_expr var_assign
%type <i_value> par parameter
%type <s_value> biop

/* Operators */
%left '(' ')'
%left "||"
%left "&&"
%left '!'
%left '<' "<=" "==" "=>" '>' "!="
%left '+' '-'
%left '*' '/' '%'
%nonassoc UMINUS

%%

// Start symbol
program:	OBJECT ID '{'
			{
				create(string($2));
				jasm << "class " << $2 << "\n{\n";
			}
			block_contents_obj '}' { jasm << "}"; }
		;

block_contents_obj:	block_content_obj
		|			block_contents_obj block_content_obj 
		;

block_content_obj:	declaration
		|			method
		;

method:	DEF ID '('
			{ create($2); }
		method_arg_con
			{
				if (cur_table->type == 0)	// return type is void
				{
					jasm_tab(cur_table->layer + 1);
					jasm << "return\n";
				}
				cur_table = cur_table->previous;
				jasm_tab(cur_table->layer + 1);
				jasm << "}\n";
			}
	;

method_arg_con: method_arg 
		{
			jasm_tab(cur_table->layer);
			jasm << "method public static ";
			if (cur_table->type == 0) jasm << "void ";
			else if (cur_table->type == 1) jasm << "int ";
			else
			{
				printf("Disallowed data type: ");
				output_type(cur_table->type);
				puts("");
				exit(-1);
			}
			jasm << cur_table->name << " (";
			if (cur_table->name == "main")
				jasm << "java.lang.String[]";
			else
				for (int i = 0; i < cur_table->parameter; i++)
				{
					if (i != 0) jasm << ", ";
					if (cur_table->type == 0) jasm << "void";
					else if (cur_table->type == 1) jasm << "int";
					else
					{
						printf("Disallowed data type: ");
						output_type(cur_table->type);
						puts("");
						exit(-1);
					}
				}
			jasm << ")\n";
			jasm_tab(cur_table->layer);
			jasm << "max_stack 15\n";
			jasm_tab(cur_table->layer);
			jasm << "max_locals 15\n";
			jasm_tab(cur_table->layer);
			jasm << "{\n";
		}
				method_con
	;

method_arg:	')'
		{ set_par_type(0, 0); }
	|		parameter ')'
		{ set_par_type($1, 0); }
	|		')' ':' type
		{ set_par_type(0, $3); }
	|		parameter ')' ':' type
		{ set_par_type($1, $4); }
	;

method_con:	'{' '}'
	|		'{' block_contents '}'
	;

parameter:	par					{ $$ = 1; }
	|		parameter ',' par	{ $$ = $1 + 1; }
	;

par:	ID ':' type	{ insert(1, $1, $3); }
	;

block_contents:	block_content
	|			block_contents block_content
	;

block_content:	declaration
	|			statement
	|			RETURN
		{
			if (cur_table != nullptr)
				if (cur_table->type != 0)
				{
					printf("Line %d: Error. return type of %s is not void", linenumber, cur_table->name.c_str());
					exit(-1);
				}
			jasm_tab(cur_table->layer + 1);
			jasm << "return\n";
		}
	|			RETURN expression
		{
			if (cur_table != nullptr)
				if (cur_table->type != $2)
				{
					printf("Line %d: Error. return type of %s is not %d", linenumber, cur_table->name.c_str(), $2);
					exit(-1);
				}
			jasm_tab(cur_table->layer + 1);
			jasm << "ireturn\n";
		}
	|			'{'
		{ create("unknown"); }
				'}'
		{ cur_table = cur_table->previous; }	// no content
	|			'{'
		{ create("unknown"); }
				block_contents '}'
		{ cur_table = cur_table->previous; }	// has content
	;

// All kind of declaration
declaration:	val
	|			var
	|			array
	;

// Constant Declaration
val:	VAL ID '=' INT		{ insert_val_int(0, $2, 1, $4);	/* data type is defined by expression. */ }
	|	VAL ID '=' TRUE		{ insert_val_int(0, $2, 5, 1); /* data type is defined by expression. */ }
	|	VAL ID '=' FALSE	{ insert_val_int(0, $2, 5, 0); /* data type is defined by expression. */ }
	|	VAL ID '=' STRING	{ insert_val_string(0, $2, 1, $4);	/* data type is defined by expression. */ }
	|	VAL ID ':' type '=' INT		{ insert_val_int(0, $2, 1, $6); }
	|	VAL ID ':' type '=' TRUE	{ insert_val_int(0, $2, 5, 1); }
	|	VAL ID ':' type '=' FALSE	{ insert_val_int(0, $2, 5, 0); }
	|	VAL ID ':' type '=' STRING	{ insert_val_string(0, $2, 5, $6); }
	;

// Variable Declaration
var:	VAR ID
			{
				insert(1, $2, 1);		/* insert constant, data type default as INT */
				if (cur_table == head)
					jasm << "\tfield static int " << $2 << "\n";
			}
	|	VAR ID ':' type
			{
				insert(1, $2, $4);	/* set data type */
				if (cur_table == head)
				{
					jasm << "\tfield static ";
					jasm_type($4);
					jasm << " " << $2 << "\n";
				}
			}
	|	VAR ID '=' var_assign
			{
				if ($4 == 6)
					insert(1, $2, 5);	/* set ID's data type as boolean */
				else
					insert(1, $2, $4);	/* set ID's data type as $4 */

				// only occer in method
				jasm_tab(cur_table->layer + 1);
				for (size_t i = 0; i < cur_table->identifier.size(); i++)
					if (cur_table->identifier[i].name == $2)
						jasm << "istore " << i << "\n";
			}
	|	VAR ID ':' type '=' var_assign
			{
				if ($4 != $6)
				{
					printf("Line %d: Warning: right value was not match to %d, the data type of ‘%s‘", linenumber, $4, $2);	/* insert variable, and check the data type between $4 and $6. */
					exit(-1);
				}
				if ($4 == 6)
					insert(1, $2, 5);	/* set ID's data type as boolean */
				else
					insert(1, $2, $4);	/* set ID's data type as $4 */

				// only occer in method
				jasm_tab(cur_table->layer + 1);
				for (size_t i = 0; i < cur_table->identifier.size(); i++)
					if (cur_table->identifier[i].name == $2)
						jasm << "istore " << i << "\n";
			}
	;

// Array Declaration (NO array in project3)
array:	VAR ID ':' type '[' expression ']'
			{
				if ($4 == 6)
					insert(1, $2, 5);	/* set ID's data type as boolean */
				else
					insert(1, $2, $4);	/* set ID's data type as $4 */
			}
	;

var_assign:	INT
		{
			if (cur_table != head)
			{
				jasm_tab(cur_table->layer + 1);
				jasm << "sipush " << $1 << "\n";
			}
		}
	|		TRUE
		
		{
			if (cur_table != head)
			{
				jasm_tab(cur_table->layer + 1);
				jasm << "sipush 1\n";
			}
		}
	|		FALSE
		
		{
			if (cur_table != head)
			{
				jasm_tab(cur_table->layer + 1);
				jasm << "sipush 0\n";
			}
		}
	;

statement:	ID	// single identifier, nothing to do
	|	ID '=' expression
			{
				ident identifier = jasm_left_id($1);
				if (identifier.name == "") Not_Declared(linenumber, $1);
				if (identifier.lry == 0) Constant_Not_Change(linenumber, $1);
				if (identifier.data_type != $3) printf("Line %d: Warning: data type not the same.", linenumber);	// must be modified again!!!
				/* 1. find $1(id). | 2. type check */ }
	|	ID '(' ')'
			{
				/* 1. find $1(STable). | 2. check parameter */
				STable *table = lookup_table($1);
				if (table == nullptr) Not_Declared(linenumber, $1);
				if (table->parameter > 0) Few_Par(linenumber, table);

				// output jasm
				jasm_tab(cur_table->layer + 1);
				jasm << "invokestatic ";
				jasm_type(table->type);
				jasm << " " << head->name << "." << temp_table->name << "()\n";
			}
	|	ID '=' ID '(' ')'
			{
				/* 1. find $1(id). */
				ident identifier = lookup_id($1);
				if (identifier.name == "") Not_Declared(linenumber, $1);
				if (identifier.lry == 0) Constant_Not_Change(linenumber, $1);
				/* 2. find $3(STable). */
				STable *table = lookup_table($1);
				if (table == nullptr) Not_Declared(linenumber, $1);
				if (table->parameter > 0) Few_Par(linenumber, table);
				/* 3. check parameter */
				if (identifier.data_type != table->type) Type_Not_Match(linenumber, $1, $3);
				// output jasm
				jasm_tab(cur_table->layer + 1);
				jasm << "invokestatic ";
				jasm_type(table->type);
				jasm << " " << head->name << "." << temp_table->name << "()\n";
			}
	|	ID '(' 
			{
				/* 1. find $1(STable). */
				temp_table = lookup_table($1);
				if (temp_table == nullptr) Not_Declared(linenumber, $1);
				else num_arg = temp_table->parameter;
			}
		expression_list ')'
			{
				/* 2. check argumenti of $3. */
				Amount_Argument_Check(linenumber);
				Arguments_Type_Check(linenumber);

				// output jasm
				jasm_tab(cur_table->layer + 1);
				jasm << "invokestatic ";
				jasm_type(temp_table->type);
				jasm << " " << head->name << "." << temp_table->name << "(";
				for (int i = 0; i < temp_table->parameter; i++)
				{
					if (i != 0) jasm << ", ";
					if (temp_table->type == 0) jasm << "void";
					else if (temp_table->type == 1) jasm << "int";
					else
					{
						printf("Disallowed data type: ");
						output_type(temp_table->type);
						puts("");
						exit(-1);
					}
				}
				jasm << ")\n";

				temp_table = nullptr;
				num_arg = 0;
			}
	|	ID '=' ID '(' 
			{
				/* 1. find $3(STable). */
				temp_table = lookup_table($3);
				if (temp_table == nullptr) Not_Declared(linenumber, $3);
				else num_arg = temp_table->parameter;
			}
		expression_list ')'
			{
				/* 2. check argumenti of $3. */
				Amount_Argument_Check(linenumber);
				Arguments_Type_Check(linenumber);

				// output jasm
				jasm_tab(cur_table->layer + 1);
				jasm << "invokestatic ";
				jasm_type(temp_table->type);
				jasm << " " << head->name << "." << temp_table->name << "(";
				for (int i = 0; i < temp_table->parameter; i++)
				{
					if (i != 0) jasm << ", ";
					if (temp_table->type == 0) jasm << "void";
					else if (temp_table->type == 1) jasm << "int";
					else
					{
						printf("Disallowed data type: ");
						output_type(temp_table->type);
						puts("");
						exit(-1);
					}
				}
				jasm << ")\n";
				ident identifier = jasm_left_id($1);
				
				/* 3. find $1(id). */
				if (identifier.name == "") Not_Declared(linenumber, $1);
				if (identifier.lry == 0) Constant_Not_Change(linenumber, $1);
				/* 4. type check $1 and $3. */
				if (identifier.data_type != temp_table->type) Type_Not_Match(linenumber, $1, $3);
				
				temp_table = nullptr;
				num_arg = 0;
			}
	|	ID '[' expression ']' '=' expression	/* NO array in project3 */
			{
				/* 1. find $1 and check array. */
				ident identifier = lookup_id($1);
				if (identifier.name == "") Not_Declared(linenumber, $1);
				if (identifier.lry != 2) Not_Array(linenumber, $1);
				/* 2. type check $3. */
				if ($3 != 1) Index_Type_Error(linenumber);
				/* 3. type ckeck $1 and $6 */
				if ($6 != identifier.data_type) Assign_Type_Error(linenumber, identifier);
			}
	|	ID '[' expression ']' '=' ID '(' ')'	/* NO array in project3 */
			{ 
				/* 1. find $1 and check array. */
				ident identifier = lookup_id($1);
				if (identifier.name == "") Not_Declared(linenumber, $1);
				if (identifier.lry != 2) Not_Array(linenumber, $1);
				/* 2. type check $3. */
				if ($3 != 1) Index_Type_Error(linenumber);
				/* 3. find $6 and check parameter. */
				STable *table = lookup_table($6);
				if (table == nullptr) Not_Declared(linenumber, $6);
				if (table->parameter > 0) Few_Par(linenumber, table);
				/* 4. type check $1 and $6. */
				if (identifier.data_type != table->type) Type_Not_Match(linenumber, $1, $6);
			}
	|	ID '[' expression ']' '=' ID '('	/* NO array in project3 */
			{
				/* 1. find $6(STable). */
				temp_table = lookup_table($6);
				if (temp_table == nullptr) Not_Declared(linenumber, $6);
				else num_arg = temp_table->parameter;
			}
		expression_list ')'
			{
				/* 2. find $1 and check array. */
				ident identifier = lookup_id($1);
				if (identifier.name == "") Not_Declared(linenumber, $1);
				if (identifier.lry != 2) Not_Array(linenumber, $1);
				/* 3. type check $3. */
				if ($3 != 1) Index_Type_Error(linenumber);
				/* 4. check argument of $6. */
				Amount_Argument_Check(linenumber);
				Arguments_Type_Check(linenumber);
				/* 5. type check $1 and $6. */
				if (identifier.data_type != temp_table->type) Type_Not_Match(linenumber, $1, $6);
				temp_table = nullptr;
				num_arg = 0;
			}
	|	PRINT '('
			{
				jasm_tab(cur_table->layer + 1);
				jasm << "getstatic java.io.PrintStream java.lang.System.out\n";
			}
		expression ')'
			{
				if ($4 == 1)
				{
					jasm_tab(cur_table->layer + 1);
					jasm << "invokevirtual void java.io.PrintStream.print(int)\n";
				}
				if ($4 == 4)
				{
					jasm_tab(cur_table->layer + 1);
					jasm << "invokevirtual void java.io.PrintStream.print(java.lang.String)\n";
				}
				if ($4 == 5)
				{
					jasm_tab(cur_table->layer + 1);
					jasm << "ldc \"true\"\n";
					jasm_tab(cur_table->layer + 1);
					jasm << "invokevirtual void java.io.PrintStream.print(java.lang.String)\n";
				}
				if ($4 == 6)
				{
					jasm_tab(cur_table->layer + 1);
					jasm << "ldc \"false\"\n";
					jasm_tab(cur_table->layer + 1);
					jasm << "invokevirtual void java.io.PrintStream.print(java.lang.String)\n";
				}
			}
	|	PRINTLN '('
			{
				jasm_tab(cur_table->layer + 1);
				jasm << "getstatic java.io.PrintStream java.lang.System.out\n";
			}		
		expression ')'
			{
				if ($4 == 1)
				{
					jasm_tab(cur_table->layer + 1);
					jasm << "invokevirtual void java.io.PrintStream.println(int)\n";
				}
				if ($4 == 4)
				{
					jasm_tab(cur_table->layer + 1);
					jasm << "invokevirtual void java.io.PrintStream.println(java.lang.String)\n";
				}
				if ($4 == 5)
				{
					jasm_tab(cur_table->layer + 1);
					jasm << "ldc \"true\"\n";
					jasm_tab(cur_table->layer + 1);
					jasm << "invokevirtual void java.io.PrintStream.println(java.lang.String)\n";
				}
				if ($4 == 6)	// must modify!!!
				{
					jasm_tab(cur_table->layer + 1);
					jasm << "ldc \"false\"\n";
					jasm_tab(cur_table->layer + 1);
					jasm << "invokevirtual void java.io.PrintStream.println(java.lang.String)\n";
				}
			}
	|	READ ID
			{ if (lookup_id($2).name == "") Not_Declared(linenumber, $2); }
	|	IF '(' boolean_expression ')' block_or_statement	//////
	|	IF '(' boolean_expression ')' block_or_statement ELSE block_or_statement	//////
	|	FOR '(' ID '<' '-' INT TO INT ')' block_or_statement//////
	|	WHILE '(' boolean_expression ')' block_or_statement	//////
	;

expression_list:	expression
			{
				arguments_type.clear();
				arguments_type.push_back($1);
			}
	|				expression_list ',' expression
			{
				arguments_type.push_back($3);
			}
	;	// No Do Type check at argument

expression:	expression '+' expression	{ jasm_tab(cur_table->layer + 1); jasm << "iadd\n"; }
	|		expression '-' expression	{ jasm_tab(cur_table->layer + 1); jasm << "isub\n"; }
	|		expression '*' expression	{ jasm_tab(cur_table->layer + 1); jasm << "imul\n"; }
	|		expression '/' expression	{ jasm_tab(cur_table->layer + 1); jasm << "idiv\n"; }
	|		expression '%' expression	{ jasm_tab(cur_table->layer + 1); jasm << "irem\n"; }
	|		'-' expression %prec UMINUS	{ jasm_tab(cur_table->layer + 1); jasm << "ineg\n"; $$ = $2; }
	|		'(' expression ')'	{ $$ = $2; }
	|		{ jasm_tab(cur_table->layer + 1); } data	{ $$ = $2; }	
	|		ID
			{
				ident identifier = jasm_id($1);
				if (identifier.name == "")
				{
					printf("Line %d: Error. Identifier \"%s\" was not declared\n", linenumber, $1);
					exit(-1);
				}
				
				$$ = identifier.data_type;
			}
	;

boolean_expression:	bool_expr
			{
				if ($$ != 5)
				{
					printf("Line %d: Error: expression must be ‘bool‘ type\n", linenumber);
					exit(-1);
				}
				else $$ = 5;
			}
	|				bool_expr biop bool_expr	
			{
				if ($1 == $3) $$ = 5;
				else Data_Type_Not_Match(linenumber, $1, $3);

				if ($2 == "&&")
				{
					jasm_tab(cur_table->layer + 1);
					jasm << "iand\n";
				}
				else if ($2 == "||")
				{
					jasm_tab(cur_table->layer + 1);
					jasm << "ior\n";
				}
				else
				{
					/*jasm_tab(cur_table->layer + 1);
					jasm << "isub\n";
					if ($2 == "<") jasm << "iflt\n";
					if ($2 == ">") jasm << "ifgt\n";
					if ($2 == "<=") jasm << "ifle\n";
					if ($2 == ">=") jasm << "ifge\n";
					if ($2 == "==") jasm << "iadd\n";
					if ($2 == "!=") jasm << "ifne\n";*/
				}
			}
	;

bool_expr:	'!' bool_expr	{ jasm_tab(cur_table->layer + 1); jasm << "ixor\n"; $$ = $2; }
	|		'(' boolean_expression ')'	{ $$ = $2; }
	|		ID
	{
		ident identifier = jasm_id($1);
		if (identifier.name == "") Not_Declared(linenumber, $1);
		else $$ = identifier.data_type;
	}
	|		INT				{ $$ = 1; }
	|		CHAR			{ $$ = 2; }
	|		FLOAT			{ $$ = 3; }
	|		TRUE			{ $$ = 5; }
	|		FALSE			{ $$ = 5; }
	;

biop:	BIOP
	|	'<'	{ $$ = strdup("<"); }
	|	'>' { $$ = strdup(">"); }
	;

block_or_statement:	'{' '}'
	|				'{'
			{ create("unknown"); }
					block_contents '}'
			{ cur_table = cur_table->previous; }
	|				statement
	;

// Data Type
type:	INT		{ $$ = 1; }
	|	CHAR	{ $$ = 2; }
	|	FLOAT	{ $$ = 3; }
	|	STRING	{ $$ = 4; }
	|	BOOLEAN	{ $$ = 5; }
	;

data:	INT		{ $$ = 1; jasm << "sipush " << $1 << "\n"; }
	|	CHAR		{ $$ = 2; }
	|	FLOAT		{ $$ = 3; }
	|	STRING	{ $$ = 4; jasm << "ldc \"" << $1 << "\"\n"; }
	|	TRUE		{ $$ = 5; jasm << "iconst_1" << "\n"; }
	|	FALSE		{ $$ = 6; jasm << "iconst_0" << "\n"; }
	;

%%

int main(int argc, char* argv[])
{
    /* open the source program file */
	if (argc == 1) {
		/* notice user to key in data and end of input by ^D. */
		yyparse();
	}
	else if (argc > 1) {
		// Open a file called argv[1] for reading
		if ((yyin = fopen(argv[1], "r")) == NULL) {
			printf("file %s can't open for read!\n", argv[1]);
			exit(0);
		}
		if (argc > 2) {
			printf("There can only be ONE parameter\n");
			exit(0);
		}
		else
		{
			std::string filename(argv[1]);
			filename = filename.substr(0, strlen(argv[1]) - 5);
			filename += "jasm";
			jasm.open(filename, ios::out | ios::trunc);
			yyparse();
			//std::cout << "output file name: " << filename << std::endl;
		}
		fclose(yyin);
		jasm.close();
	}
	
	bool has_main = false;
	for (size_t t = 0; t < head->next.size(); t++)
		if (head->next[t]->name == "main") has_main = true;
	if (!has_main)
	{
		cout << "error: There is no ‘main‘ method in program.\n";
		exit(-1);
	}
	dump();
	return 0;
}

void yyerror(char* msg)
{
    fprintf(stderr, "line %d: %s\n", linenumber, msg);
}


