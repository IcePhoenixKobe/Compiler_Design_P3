/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    BIOP = 259,
    AANDD = 260,
    OORR = 261,
    BREAK = 262,
    CASE = 263,
    CLASS = 264,
    CONTINUE = 265,
    DEF = 266,
    DO = 267,
    ELSE = 268,
    EXIT = 269,
    FOR = 270,
    IF = 271,
    NULL_SCALA = 272,
    OBJECT = 273,
    PRINT = 274,
    PRINTLN = 275,
    READ = 276,
    REPEAT = 277,
    RETURN = 278,
    TO = 279,
    TYPE = 280,
    VAL = 281,
    VAR = 282,
    WHILE = 283,
    TRUE = 284,
    FALSE = 285,
    INT = 286,
    CHAR = 287,
    FLOAT = 288,
    STRING = 289,
    BOOLEAN = 290,
    UMINUS = 295
  };
#endif
/* Tokens.  */
#define ID 258
#define BIOP 259
#define AANDD 260
#define OORR 261
#define BREAK 262
#define CASE 263
#define CLASS 264
#define CONTINUE 265
#define DEF 266
#define DO 267
#define ELSE 268
#define EXIT 269
#define FOR 270
#define IF 271
#define NULL_SCALA 272
#define OBJECT 273
#define PRINT 274
#define PRINTLN 275
#define READ 276
#define REPEAT 277
#define RETURN 278
#define TO 279
#define TYPE 280
#define VAL 281
#define VAR 282
#define WHILE 283
#define TRUE 284
#define FALSE 285
#define INT 286
#define CHAR 287
#define FLOAT 288
#define STRING 289
#define BOOLEAN 290
#define UMINUS 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 32 "parser.y" /* yacc.c:1909  */

	int i_value;
	double d_value;
	char* s_value;
	int type;	// 0: void, 1: int, 2: char, 3: float, 4: string, 5: boolean

#line 133 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
