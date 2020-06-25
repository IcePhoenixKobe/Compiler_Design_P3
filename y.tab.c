/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 12 "parser.y" /* yacc.c:339  */

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


#line 85 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 32 "parser.y" /* yacc.c:355  */

	int i_value;
	double d_value;
	char* s_value;
	int type;	// 0: void, 1: int, 2: char, 3: float, 4: string, 5: boolean

#line 204 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 221 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   280

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  201

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    38,     2,     2,     2,    49,     2,     2,
      36,    37,    47,    45,    54,    46,     2,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    53,     2,
      39,    55,    43,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    40,    41,    42,    44,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    70,    70,    69,    77,    78,    81,    82,    86,    85,
     101,   100,   141,   143,   145,   147,   151,   152,   155,   156,
     159,   162,   163,   166,   167,   168,   179,   191,   190,   195,
     194,   201,   202,   203,   207,   208,   209,   210,   211,   212,
     213,   214,   218,   224,   234,   247,   268,   277,   285,   294,
     305,   306,   313,   326,   345,   344,   381,   380,   423,   434,
     450,   449,   473,   472,   505,   504,   536,   538,   544,   550,
     551,   555,   562,   570,   575,   581,   582,   583,   584,   585,
     586,   587,   588,   588,   590,   603,   612,   620,   621,   626,
     631,   682,   688,   689,   690,   691,   692,   695,   696,   697,
     700,   702,   701,   705,   709,   710,   711,   712,   713,   716,
     717,   718,   719,   720,   721
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "BIOP", "AANDD", "OORR", "BREAK",
  "CASE", "CLASS", "CONTINUE", "DEF", "DO", "ELSE", "EXIT", "FOR", "IF",
  "NULL_SCALA", "OBJECT", "PRINT", "PRINTLN", "READ", "REPEAT", "RETURN",
  "TO", "TYPE", "VAL", "VAR", "WHILE", "TRUE", "FALSE", "INT", "CHAR",
  "FLOAT", "STRING", "BOOLEAN", "'('", "')'", "'!'", "'<'", "\"<=\"",
  "\"==\"", "\"=>\"", "'>'", "\"!=\"", "'+'", "'-'", "'*'", "'/'", "'%'",
  "UMINUS", "'{'", "'}'", "':'", "','", "'='", "'['", "']'", "$accept",
  "program", "$@1", "block_contents_obj", "block_content_obj", "method",
  "$@2", "method_arg_con", "$@3", "method_arg", "method_con", "parameter",
  "par", "block_contents", "block_content", "$@4", "$@5", "declaration",
  "val", "var", "array", "var_assign", "statement", "$@6", "$@7", "$@8",
  "$@9", "$@10", "ifact", "elseact", "expression_list", "expression",
  "$@11", "boolean_expression", "bool_data", "biop", "block_or_statement",
  "$@12", "type", "data", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,    40,    41,    33,    60,
     291,   292,   293,    62,   294,    43,    45,    42,    47,    37,
     295,   123,   125,    58,    44,    61,    91,    93
};
# endif

#define YYPACT_NINF -119

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-119)))

#define YYTABLE_NINF -83

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,    13,    73,   -32,  -119,  -119,   173,    75,    76,    80,
      -5,  -119,  -119,  -119,  -119,  -119,  -119,    91,   142,   177,
    -119,  -119,  -119,   207,    41,   207,   219,     1,  -119,  -119,
    -119,  -119,  -119,    54,  -119,  -119,  -119,  -119,   -45,  -119,
    -119,  -119,  -119,    31,    84,  -119,  -119,   -34,  -119,   197,
     219,    15,   207,   207,   116,   141,   165,  -119,  -119,  -119,
    -119,  -119,  -119,    15,    15,   156,   143,  -119,  -119,    14,
    -119,   207,  -119,   169,  -119,    15,    15,    15,    15,    15,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,    40,   144,
     145,   193,   218,   252,    74,   220,   205,  -119,    29,  -119,
    -119,  -119,  -119,  -119,   204,   204,  -119,  -119,  -119,   221,
      99,    15,   256,   160,  -119,  -119,  -119,   198,   160,   208,
     113,  -119,  -119,  -119,    15,   225,   198,   162,   223,  -119,
    -119,  -119,  -119,  -119,  -119,   160,   160,     2,    19,    15,
      15,    48,  -119,    71,   -23,   198,   226,   209,   222,    63,
    -119,   160,   160,  -119,  -119,  -119,  -119,   128,   175,   188,
     127,  -119,  -119,    15,  -119,    15,   108,   234,  -119,  -119,
     261,   127,  -119,  -119,  -119,   215,  -119,  -119,   198,   115,
     233,   198,   246,   258,  -119,   113,  -119,   235,   242,  -119,
      98,  -119,    15,   237,   127,  -119,   129,   127,  -119,  -119,
    -119
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     2,     0,     0,     0,     0,
       0,     4,     7,     6,    31,    32,    33,     0,     0,    42,
       3,     5,     8,     0,     0,     0,     0,     0,   104,   105,
     106,   107,   108,     0,    35,    36,    34,    37,    43,    48,
      49,    47,    44,     0,    12,     9,    10,     0,    18,     0,
       0,    82,     0,     0,     0,    13,     0,    39,    40,    38,
      41,    45,    84,    82,    82,     0,     0,    20,    14,     0,
      11,     0,    19,     0,    80,    82,    82,    82,    82,    82,
      46,   113,   114,   109,   110,   111,   112,    83,    50,     0,
       0,     0,     0,     0,    25,     0,    29,    16,     0,    21,
      23,    24,    15,    81,    75,    76,    77,    78,    79,    54,
      82,    82,     0,     0,    62,    64,    66,    26,     0,     0,
       0,    17,    22,    52,    82,    84,    51,     0,     0,    91,
      95,    96,    92,    93,    94,     0,     0,     0,    85,    82,
      82,     0,    28,     0,     0,    73,    56,     0,     0,     0,
      86,     0,     0,    71,    97,    98,    99,     0,     0,     0,
       0,    30,    55,    82,    53,    82,    82,     0,    87,    88,
      89,     0,    90,    63,    65,   101,   103,    70,    74,     0,
      84,    58,     0,    67,   100,     0,    57,    60,     0,    72,
       0,    59,    82,     0,     0,   102,     0,     0,    68,    61,
      69
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -119,  -119,  -119,  -119,   265,  -119,  -119,  -119,  -119,  -119,
    -119,  -119,   224,  -118,   -97,  -119,  -119,    -1,  -119,  -119,
    -119,   227,    -9,  -119,  -119,  -119,  -119,  -119,  -119,  -119,
     -27,   -51,  -119,    35,   119,  -119,   -15,  -119,    11,  -119
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,    10,    11,    12,    27,    45,    54,    46,
      70,    47,    48,    98,    99,   119,   120,   100,    14,    15,
      16,    42,   101,   124,   165,   192,   139,   140,   171,   194,
     144,   145,    66,   137,   138,   157,   177,   185,    33,    87
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      65,   122,   143,    55,    43,    13,     7,   151,   152,    13,
      50,    51,    73,    74,   162,     1,     3,    88,    62,     5,
      56,     8,     9,   154,   104,   105,   106,   107,   108,    89,
      90,   163,    88,    91,    92,    93,    38,    94,    44,   153,
       8,     9,    95,   117,    89,    90,   122,    20,    91,    92,
      93,    63,    94,   151,   152,     8,     9,    95,   155,   126,
     127,    64,   156,    67,    68,    96,    97,   190,   151,   152,
      34,    35,    36,     4,    88,    37,   109,    62,    17,    18,
      96,   121,   102,    19,    52,   160,    89,    90,   158,   159,
      91,    92,    93,   122,    94,   110,   111,     8,     9,    95,
     168,    88,   125,   -82,   -82,   -82,   -82,   -82,   -82,    49,
      63,   180,   178,    89,    90,   181,    88,    91,    92,    93,
      64,    94,    96,   161,     8,     9,    95,    22,    89,    90,
      88,   129,    91,    92,    93,    63,    94,    53,   179,     8,
       9,    95,    89,    90,    63,    64,    91,    92,    93,    96,
     195,   176,   186,   141,    64,    95,   183,   130,   131,   132,
     133,   134,   176,   129,    96,   196,   199,    69,    43,   163,
     149,   150,    81,    82,    83,    84,    85,    86,   175,   198,
     112,   113,   200,   163,     7,   176,   169,   170,   176,   130,
     131,   132,   133,   134,    71,    23,   135,    24,   136,     8,
       9,    75,    76,    77,    78,    79,   103,    75,    76,    77,
      78,    79,   173,    80,    75,    76,    77,    78,    79,   147,
      75,    76,    77,    78,    79,   174,    57,    58,    59,   114,
      25,    60,    26,    75,    76,    77,    78,    79,    28,    29,
      30,    31,    32,    75,    76,    77,    78,    79,    39,    40,
      41,    77,    78,    79,   115,   116,   118,   -27,   123,   128,
     142,   146,   148,   164,   166,   182,   151,   184,   167,   187,
     188,   189,   191,   193,   197,    21,   172,    61,     0,     0,
      72
};

static const yytype_int16 yycheck[] =
{
      51,    98,   120,    37,     3,     6,    11,     5,     6,    10,
      55,    56,    63,    64,    37,    18,     3,     3,     3,    51,
      54,    26,    27,     4,    75,    76,    77,    78,    79,    15,
      16,    54,     3,    19,    20,    21,    25,    23,    37,    37,
      26,    27,    28,    94,    15,    16,   143,    52,    19,    20,
      21,    36,    23,     5,     6,    26,    27,    28,    39,   110,
     111,    46,    43,    52,    53,    51,    52,   185,     5,     6,
      29,    30,    31,     0,     3,    34,    36,     3,     3,     3,
      51,    52,    71,     3,    53,    37,    15,    16,   139,   140,
      19,    20,    21,   190,    23,    55,    56,    26,    27,    28,
      37,     3,     3,    29,    30,    31,    32,    33,    34,    55,
      36,     3,   163,    15,    16,   166,     3,    19,    20,    21,
      46,    23,    51,    52,    26,    27,    28,    36,    15,    16,
       3,     3,    19,    20,    21,    36,    23,    53,   165,    26,
      27,    28,    15,    16,    36,    46,    19,    20,    21,    51,
      52,   160,    37,   118,    46,    28,   171,    29,    30,    31,
      32,    33,   171,     3,    51,   192,    37,    51,     3,    54,
     135,   136,    29,    30,    31,    32,    33,    34,    51,   194,
      36,    36,   197,    54,    11,   194,   151,   152,   197,    29,
      30,    31,    32,    33,    53,    53,    36,    55,    38,    26,
      27,    45,    46,    47,    48,    49,    37,    45,    46,    47,
      48,    49,    37,    57,    45,    46,    47,    48,    49,    57,
      45,    46,    47,    48,    49,    37,    29,    30,    31,    36,
      53,    34,    55,    45,    46,    47,    48,    49,    31,    32,
      33,    34,    35,    45,    46,    47,    48,    49,    29,    30,
      31,    47,    48,    49,    36,     3,    36,    52,    37,     3,
      52,    36,    39,    37,    55,    31,     5,    52,    46,    36,
      24,    13,    37,    31,    37,    10,   157,    50,    -1,    -1,
      56
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    18,    59,     3,     0,    51,    60,    11,    26,    27,
      61,    62,    63,    75,    76,    77,    78,     3,     3,     3,
      52,    62,    36,    53,    55,    53,    55,    64,    31,    32,
      33,    34,    35,    96,    29,    30,    31,    34,    96,    29,
      30,    31,    79,     3,    37,    65,    67,    69,    70,    55,
      55,    56,    53,    53,    66,    37,    54,    29,    30,    31,
      34,    79,     3,    36,    46,    89,    90,    96,    96,    51,
      68,    53,    70,    89,    89,    45,    46,    47,    48,    49,
      57,    29,    30,    31,    32,    33,    34,    97,     3,    15,
      16,    19,    20,    21,    23,    28,    51,    52,    71,    72,
      75,    80,    96,    37,    89,    89,    89,    89,    89,    36,
      55,    56,    36,    36,    36,    36,     3,    89,    36,    73,
      74,    52,    72,    37,    81,     3,    89,    89,     3,     3,
      29,    30,    31,    32,    33,    36,    38,    91,    92,    84,
      85,    91,    52,    71,    88,    89,    36,    57,    39,    91,
      91,     5,     6,    37,     4,    39,    43,    93,    89,    89,
      37,    52,    37,    54,    37,    82,    55,    46,    37,    91,
      91,    86,    92,    37,    37,    51,    80,    94,    89,    88,
       3,    89,    31,    94,    52,    95,    37,    36,    24,    13,
      71,    37,    83,    31,    87,    52,    88,    37,    94,    37,
      94
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    60,    59,    61,    61,    62,    62,    64,    63,
      66,    65,    67,    67,    67,    67,    68,    68,    69,    69,
      70,    71,    71,    72,    72,    72,    72,    73,    72,    74,
      72,    75,    75,    75,    76,    76,    76,    76,    76,    76,
      76,    76,    77,    77,    77,    77,    78,    79,    79,    79,
      80,    80,    80,    80,    81,    80,    82,    80,    80,    80,
      83,    80,    84,    80,    85,    80,    80,    80,    80,    80,
      80,    86,    87,    88,    88,    89,    89,    89,    89,    89,
      89,    89,    90,    89,    89,    91,    91,    91,    91,    91,
      91,    92,    92,    92,    92,    92,    92,    93,    93,    93,
      94,    95,    94,    94,    96,    96,    96,    96,    96,    97,
      97,    97,    97,    97,    97
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     6,     1,     2,     1,     1,     0,     5,
       0,     3,     1,     2,     3,     4,     2,     3,     1,     3,
       3,     1,     2,     1,     1,     1,     2,     0,     3,     0,
       4,     1,     1,     1,     4,     4,     4,     4,     6,     6,
       6,     6,     2,     4,     4,     6,     7,     1,     1,     1,
       1,     3,     3,     5,     0,     5,     0,     7,     6,     8,
       0,    10,     0,     5,     0,     5,     2,     6,     9,    10,
       5,     0,     0,     1,     3,     3,     3,     3,     3,     3,
       2,     3,     0,     2,     1,     1,     2,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 70 "parser.y" /* yacc.c:1646  */
    {
				create(string((yyvsp[-1].s_value)));
				jasm << "class " << (yyvsp[-1].s_value) << "\n{\n";
			}
#line 1465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 74 "parser.y" /* yacc.c:1646  */
    { jasm << "}"; }
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 86 "parser.y" /* yacc.c:1646  */
    { create((yyvsp[-1].s_value)); }
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 88 "parser.y" /* yacc.c:1646  */
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
#line 1492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 101 "parser.y" /* yacc.c:1646  */
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
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 142 "parser.y" /* yacc.c:1646  */
    { set_par_type(0, 0); }
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 144 "parser.y" /* yacc.c:1646  */
    { set_par_type((yyvsp[-1].i_value), 0); }
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 146 "parser.y" /* yacc.c:1646  */
    { set_par_type(0, (yyvsp[0].type)); }
#line 1552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 148 "parser.y" /* yacc.c:1646  */
    { set_par_type((yyvsp[-3].i_value), (yyvsp[0].type)); }
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 155 "parser.y" /* yacc.c:1646  */
    { (yyval.i_value) = 1; }
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 156 "parser.y" /* yacc.c:1646  */
    { (yyval.i_value) = (yyvsp[-2].i_value) + 1; }
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 159 "parser.y" /* yacc.c:1646  */
    { insert(1, (yyvsp[-2].s_value), (yyvsp[0].type)); }
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 169 "parser.y" /* yacc.c:1646  */
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
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 180 "parser.y" /* yacc.c:1646  */
    {
			if (cur_table != nullptr)
				if (cur_table->type != (yyvsp[0].type))
				{
					printf("Line %d: Error. return type of %s is not %d", linenumber, cur_table->name.c_str(), (yyvsp[0].type));
					exit(-1);
				}
			jasm_tab(cur_table->layer + 1);
			jasm << "ireturn\n";
		}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 191 "parser.y" /* yacc.c:1646  */
    { create("unknown"); }
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 193 "parser.y" /* yacc.c:1646  */
    { cur_table = cur_table->previous; }
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 195 "parser.y" /* yacc.c:1646  */
    { create("unknown"); }
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 197 "parser.y" /* yacc.c:1646  */
    { cur_table = cur_table->previous; }
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 207 "parser.y" /* yacc.c:1646  */
    { insert_val_int(0, (yyvsp[-2].s_value), 1, (yyvsp[0].i_value));	/* data type is defined by expression. */ }
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 208 "parser.y" /* yacc.c:1646  */
    { insert_val_int(0, (yyvsp[-2].s_value), 5, 1); /* data type is defined by expression. */ }
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 209 "parser.y" /* yacc.c:1646  */
    { insert_val_int(0, (yyvsp[-2].s_value), 5, 0); /* data type is defined by expression. */ }
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 210 "parser.y" /* yacc.c:1646  */
    { insert_val_string(0, (yyvsp[-2].s_value), 1, (yyvsp[0].s_value));	/* data type is defined by expression. */ }
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 211 "parser.y" /* yacc.c:1646  */
    { insert_val_int(0, (yyvsp[-4].s_value), 1, (yyvsp[0].i_value)); }
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 212 "parser.y" /* yacc.c:1646  */
    { insert_val_int(0, (yyvsp[-4].s_value), 5, 1); }
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 213 "parser.y" /* yacc.c:1646  */
    { insert_val_int(0, (yyvsp[-4].s_value), 5, 0); }
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 214 "parser.y" /* yacc.c:1646  */
    { insert_val_string(0, (yyvsp[-4].s_value), 5, (yyvsp[0].s_value)); }
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 219 "parser.y" /* yacc.c:1646  */
    {
				insert(1, (yyvsp[0].s_value), 1);		/* insert constant, data type default as INT */
				if (cur_table == head)
					jasm << "\tfield static int " << (yyvsp[0].s_value) << "\n";
			}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 225 "parser.y" /* yacc.c:1646  */
    {
				insert(1, (yyvsp[-2].s_value), (yyvsp[0].type));	/* set data type */
				if (cur_table == head)
				{
					jasm << "\tfield static ";
					jasm_type((yyvsp[0].type));
					jasm << " " << (yyvsp[-2].s_value) << "\n";
				}
			}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 235 "parser.y" /* yacc.c:1646  */
    {
				if ((yyvsp[0].type) == 6)
					insert(1, (yyvsp[-2].s_value), 5);	/* set ID's data type as boolean */
				else
					insert(1, (yyvsp[-2].s_value), (yyvsp[0].type));	/* set ID's data type as $4 */

				// only occer in method
				jasm_tab(cur_table->layer + 1);
				for (size_t i = 0; i < cur_table->identifier.size(); i++)
					if (cur_table->identifier[i].name == (yyvsp[-2].s_value))
						jasm << "istore " << i << "\n";
			}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 248 "parser.y" /* yacc.c:1646  */
    {
				if ((yyvsp[-2].type) != (yyvsp[0].type))
				{
					printf("Line %d: Warning: right value was not match to %d, the data type of ‘%s‘", linenumber, (yyvsp[-2].type), (yyvsp[-4].s_value));	/* insert variable, and check the data type between $4 and $6. */
					exit(-1);
				}
				if ((yyvsp[-2].type) == 6)
					insert(1, (yyvsp[-4].s_value), 5);	/* set ID's data type as boolean */
				else
					insert(1, (yyvsp[-4].s_value), (yyvsp[-2].type));	/* set ID's data type as $4 */

				// only occer in method
				jasm_tab(cur_table->layer + 1);
				for (size_t i = 0; i < cur_table->identifier.size(); i++)
					if (cur_table->identifier[i].name == (yyvsp[-4].s_value))
						jasm << "istore " << i << "\n";
			}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 269 "parser.y" /* yacc.c:1646  */
    {
				if ((yyvsp[-3].type) == 6)
					insert(1, (yyvsp[-5].s_value), 5);	/* set ID's data type as boolean */
				else
					insert(1, (yyvsp[-5].s_value), (yyvsp[-3].type));	/* set ID's data type as $4 */
			}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 278 "parser.y" /* yacc.c:1646  */
    {
			if (cur_table != head)
			{
				jasm_tab(cur_table->layer + 1);
				jasm << "sipush " << (yyvsp[0].i_value) << "\n";
			}
		}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 287 "parser.y" /* yacc.c:1646  */
    {
			if (cur_table != head)
			{
				jasm_tab(cur_table->layer + 1);
				jasm << "sipush 1\n";
			}
		}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 296 "parser.y" /* yacc.c:1646  */
    {
			if (cur_table != head)
			{
				jasm_tab(cur_table->layer + 1);
				jasm << "sipush 0\n";
			}
		}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 307 "parser.y" /* yacc.c:1646  */
    {
				ident identifier = jasm_left_id((yyvsp[-2].s_value));
				if (identifier.name == "") Not_Declared(linenumber, (yyvsp[-2].s_value));
				if (identifier.lry == 0) Constant_Not_Change(linenumber, (yyvsp[-2].s_value));
				if (identifier.data_type != (yyvsp[0].type)) printf("Line %d: Warning: data type not the same.", linenumber);	// must be modified again!!!
				/* 1. find $1(id). | 2. type check */ }
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 314 "parser.y" /* yacc.c:1646  */
    {
				/* 1. find $1(STable). | 2. check parameter */
				STable *table = lookup_table((yyvsp[-2].s_value));
				if (table == nullptr) Not_Declared(linenumber, (yyvsp[-2].s_value));
				if (table->parameter > 0) Few_Par(linenumber, table);

				// output jasm
				jasm_tab(cur_table->layer + 1);
				jasm << "invokestatic ";
				jasm_type(table->type);
				jasm << " " << head->name << "." << temp_table->name << "()\n";
			}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 327 "parser.y" /* yacc.c:1646  */
    {
				/* 1. find $1(id). */
				ident identifier = lookup_id((yyvsp[-4].s_value));
				if (identifier.name == "") Not_Declared(linenumber, (yyvsp[-4].s_value));
				if (identifier.lry == 0) Constant_Not_Change(linenumber, (yyvsp[-4].s_value));
				/* 2. find $3(STable). */
				STable *table = lookup_table((yyvsp[-4].s_value));
				if (table == nullptr) Not_Declared(linenumber, (yyvsp[-4].s_value));
				if (table->parameter > 0) Few_Par(linenumber, table);
				/* 3. check parameter */
				if (identifier.data_type != table->type) Type_Not_Match(linenumber, (yyvsp[-4].s_value), (yyvsp[-2].s_value));
				// output jasm
				jasm_tab(cur_table->layer + 1);
				jasm << "invokestatic ";
				jasm_type(table->type);
				jasm << " " << head->name << "." << temp_table->name << "()\n";
			}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 345 "parser.y" /* yacc.c:1646  */
    {
				/* 1. find $1(STable). */
				temp_table = lookup_table((yyvsp[-1].s_value));
				if (temp_table == nullptr) Not_Declared(linenumber, (yyvsp[-1].s_value));
				else num_arg = temp_table->parameter;
			}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 352 "parser.y" /* yacc.c:1646  */
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
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 381 "parser.y" /* yacc.c:1646  */
    {
				/* 1. find $3(STable). */
				temp_table = lookup_table((yyvsp[-1].s_value));
				if (temp_table == nullptr) Not_Declared(linenumber, (yyvsp[-1].s_value));
				else num_arg = temp_table->parameter;
			}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 388 "parser.y" /* yacc.c:1646  */
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
				ident identifier = jasm_left_id((yyvsp[-6].s_value));
				
				/* 3. find $1(id). */
				if (identifier.name == "") Not_Declared(linenumber, (yyvsp[-6].s_value));
				if (identifier.lry == 0) Constant_Not_Change(linenumber, (yyvsp[-6].s_value));
				/* 4. type check $1 and $3. */
				if (identifier.data_type != temp_table->type) Type_Not_Match(linenumber, (yyvsp[-6].s_value), (yyvsp[-4].s_value));
				
				temp_table = nullptr;
				num_arg = 0;
			}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 424 "parser.y" /* yacc.c:1646  */
    {
				/* 1. find $1 and check array. */
				ident identifier = lookup_id((yyvsp[-5].s_value));
				if (identifier.name == "") Not_Declared(linenumber, (yyvsp[-5].s_value));
				if (identifier.lry != 2) Not_Array(linenumber, (yyvsp[-5].s_value));
				/* 2. type check $3. */
				if ((yyvsp[-3].type) != 1) Index_Type_Error(linenumber);
				/* 3. type ckeck $1 and $6 */
				if ((yyvsp[0].type) != identifier.data_type) Assign_Type_Error(linenumber, identifier);
			}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 435 "parser.y" /* yacc.c:1646  */
    { 
				/* 1. find $1 and check array. */
				ident identifier = lookup_id((yyvsp[-7].s_value));
				if (identifier.name == "") Not_Declared(linenumber, (yyvsp[-7].s_value));
				if (identifier.lry != 2) Not_Array(linenumber, (yyvsp[-7].s_value));
				/* 2. type check $3. */
				if ((yyvsp[-5].type) != 1) Index_Type_Error(linenumber);
				/* 3. find $6 and check parameter. */
				STable *table = lookup_table((yyvsp[-2].s_value));
				if (table == nullptr) Not_Declared(linenumber, (yyvsp[-2].s_value));
				if (table->parameter > 0) Few_Par(linenumber, table);
				/* 4. type check $1 and $6. */
				if (identifier.data_type != table->type) Type_Not_Match(linenumber, (yyvsp[-7].s_value), (yyvsp[-2].s_value));
			}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 450 "parser.y" /* yacc.c:1646  */
    {
				/* 1. find $6(STable). */
				temp_table = lookup_table((yyvsp[-1].s_value));
				if (temp_table == nullptr) Not_Declared(linenumber, (yyvsp[-1].s_value));
				else num_arg = temp_table->parameter;
			}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 457 "parser.y" /* yacc.c:1646  */
    {
				/* 2. find $1 and check array. */
				ident identifier = lookup_id((yyvsp[-9].s_value));
				if (identifier.name == "") Not_Declared(linenumber, (yyvsp[-9].s_value));
				if (identifier.lry != 2) Not_Array(linenumber, (yyvsp[-9].s_value));
				/* 3. type check $3. */
				if ((yyvsp[-7].type) != 1) Index_Type_Error(linenumber);
				/* 4. check argument of $6. */
				Amount_Argument_Check(linenumber);
				Arguments_Type_Check(linenumber);
				/* 5. type check $1 and $6. */
				if (identifier.data_type != temp_table->type) Type_Not_Match(linenumber, (yyvsp[-9].s_value), (yyvsp[-4].s_value));
				temp_table = nullptr;
				num_arg = 0;
			}
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 473 "parser.y" /* yacc.c:1646  */
    {
				jasm_tab(cur_table->layer + 1);
				jasm << "getstatic java.io.PrintStream java.lang.System.out\n";
			}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 478 "parser.y" /* yacc.c:1646  */
    {
				if ((yyvsp[-1].type) == 1)
				{
					jasm_tab(cur_table->layer + 1);
					jasm << "invokevirtual void java.io.PrintStream.print(int)\n";
				}
				if ((yyvsp[-1].type) == 4)
				{
					jasm_tab(cur_table->layer + 1);
					jasm << "invokevirtual void java.io.PrintStream.print(java.lang.String)\n";
				}
				if ((yyvsp[-1].type) == 5)
				{
					jasm_tab(cur_table->layer + 1);
					jasm << "ldc \"true\"\n";
					jasm_tab(cur_table->layer + 1);
					jasm << "invokevirtual void java.io.PrintStream.print(java.lang.String)\n";
				}
				if ((yyvsp[-1].type) == 6)
				{
					jasm_tab(cur_table->layer + 1);
					jasm << "ldc \"false\"\n";
					jasm_tab(cur_table->layer + 1);
					jasm << "invokevirtual void java.io.PrintStream.print(java.lang.String)\n";
				}
			}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 505 "parser.y" /* yacc.c:1646  */
    {
				jasm_tab(cur_table->layer + 1);
				jasm << "getstatic java.io.PrintStream java.lang.System.out\n";
			}
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 510 "parser.y" /* yacc.c:1646  */
    {
				if ((yyvsp[-1].type) == 1)
				{
					jasm_tab(cur_table->layer + 1);
					jasm << "invokevirtual void java.io.PrintStream.println(int)\n";
				}
				if ((yyvsp[-1].type) == 4)
				{
					jasm_tab(cur_table->layer + 1);
					jasm << "invokevirtual void java.io.PrintStream.println(java.lang.String)\n";
				}
				if ((yyvsp[-1].type) == 5)
				{
					jasm_tab(cur_table->layer + 1);
					jasm << "ldc \"true\"\n";
					jasm_tab(cur_table->layer + 1);
					jasm << "invokevirtual void java.io.PrintStream.println(java.lang.String)\n";
				}
				if ((yyvsp[-1].type) == 6)	// must modify!!!
				{
					jasm_tab(cur_table->layer + 1);
					jasm << "ldc \"false\"\n";
					jasm_tab(cur_table->layer + 1);
					jasm << "invokevirtual void java.io.PrintStream.println(java.lang.String)\n";
				}
			}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 537 "parser.y" /* yacc.c:1646  */
    { if (lookup_id((yyvsp[0].s_value)).name == "") Not_Declared(linenumber, (yyvsp[0].s_value)); }
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 539 "parser.y" /* yacc.c:1646  */
    {
				jasm_tab(cur_table->layer);
				jasm << "Lf" << ifelse_counter << ":\n";
				ifelse_counter++;
			}
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 545 "parser.y" /* yacc.c:1646  */
    {
				jasm_tab(cur_table->layer);
				jasm << "Le" << ifelse_counter << ":\n";
				ifelse_counter += 2;
			}
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 555 "parser.y" /* yacc.c:1646  */
    {
		jasm_tab(cur_table->layer + 1);
		jasm << "ifeq Lf" << ifelse_counter << "\n";
	}
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 562 "parser.y" /* yacc.c:1646  */
    {
		jasm_tab(cur_table->layer + 1);
		jasm << "goto Le" << ifelse_counter << "\n";
		jasm_tab(cur_table->layer);
		jasm << "Lf" << ifelse_counter << ":\n";
	}
#line 2124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 571 "parser.y" /* yacc.c:1646  */
    {
				arguments_type.clear();
				arguments_type.push_back((yyvsp[0].type));
			}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 576 "parser.y" /* yacc.c:1646  */
    {
				arguments_type.push_back((yyvsp[0].type));
			}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 581 "parser.y" /* yacc.c:1646  */
    { jasm_tab(cur_table->layer + 1); jasm << "iadd\n"; }
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 582 "parser.y" /* yacc.c:1646  */
    { jasm_tab(cur_table->layer + 1); jasm << "isub\n"; }
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 583 "parser.y" /* yacc.c:1646  */
    { jasm_tab(cur_table->layer + 1); jasm << "imul\n"; }
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 584 "parser.y" /* yacc.c:1646  */
    { jasm_tab(cur_table->layer + 1); jasm << "idiv\n"; }
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 585 "parser.y" /* yacc.c:1646  */
    { jasm_tab(cur_table->layer + 1); jasm << "irem\n"; }
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 586 "parser.y" /* yacc.c:1646  */
    { jasm_tab(cur_table->layer + 1); jasm << "ineg\n"; (yyval.type) = (yyvsp[0].type); }
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 587 "parser.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-1].type); }
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 588 "parser.y" /* yacc.c:1646  */
    { jasm_tab(cur_table->layer + 1); }
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 589 "parser.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 591 "parser.y" /* yacc.c:1646  */
    {
			ident identifier = jasm_id((yyvsp[0].s_value));
			if (identifier.name == "")
			{
				printf("Line %d: Error. Identifier \"%s\" was not declared\n", linenumber, (yyvsp[0].s_value));
				exit(-1);
			}
	
			(yyval.type) = identifier.data_type;
		}
#line 2210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 604 "parser.y" /* yacc.c:1646  */
    {
			if ((yyval.type) != 5)
			{
				printf("Line %d: Error: expression must be ‘bool‘ type\n", linenumber);
				exit(-1);
			}
				else (yyval.type) = 5;
		}
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 613 "parser.y" /* yacc.c:1646  */
    {
			jasm_tab(cur_table->layer + 1);
			jasm << "iconst_1\n";
			jasm_tab(cur_table->layer + 1);
			jasm << "ixor\n";
			(yyval.type) = (yyvsp[0].type);
		}
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 620 "parser.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[-1].type); }
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 622 "parser.y" /* yacc.c:1646  */
    {
			jasm_tab(cur_table->layer + 1);
			jasm << "iand\n";
		}
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 627 "parser.y" /* yacc.c:1646  */
    {
			jasm_tab(cur_table->layer + 1);
			jasm << "ior\n";
		}
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 632 "parser.y" /* yacc.c:1646  */
    {
			if ((yyvsp[-2].type) == (yyvsp[0].type)) (yyval.type) = 5;
			else Data_Type_Not_Match(linenumber, (yyvsp[-2].type), (yyvsp[0].type));

			jasm_tab(cur_table->layer + 1);
			jasm << "isub\n";
			if (strcmp((yyvsp[-1].s_value), "<") == 0)
			{
				jasm_tab(cur_table->layer + 1);
				jasm << "iflt L" << label_counter << "\n";
			}
			if (strcmp((yyvsp[-1].s_value), ">") == 0)
			{
				jasm_tab(cur_table->layer + 1);
				jasm << "ifgt L" << label_counter << "\n";
			}
			if (strcmp((yyvsp[-1].s_value), "<=") == 0)
			{
				jasm_tab(cur_table->layer + 1);
				jasm << "ifle L" << label_counter << "\n";
			}
			if (strcmp((yyvsp[-1].s_value), ">=") == 0)
			{
				jasm_tab(cur_table->layer + 1);
				jasm << "ifge L" << label_counter << "\n";
			}
			if (strcmp((yyvsp[-1].s_value), "==") == 0)
			{
				jasm_tab(cur_table->layer + 1);
				jasm << "ifeq L" << label_counter << "\n";
			}
			if (strcmp((yyvsp[-1].s_value), "!=") == 0)
			{
				jasm_tab(cur_table->layer + 1);
				jasm << "ifne L" << label_counter << "\n";
			}
			jasm_tab(cur_table->layer + 1);
			jasm << "iconst_0\n";
			jasm_tab(cur_table->layer + 1);
			jasm << "goto L" << label_counter + 1 << "\n";			
			jasm_tab(cur_table->layer);
			jasm << "L" << label_counter << ":\n";
			jasm_tab(cur_table->layer + 1);
			jasm << "iconst_1\n";
			jasm_tab(cur_table->layer);
			jasm << "L" << label_counter + 1 << ":\n";
			label_counter += 2;
		}
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 683 "parser.y" /* yacc.c:1646  */
    {
			ident identifier = jasm_id((yyvsp[0].s_value));
			if (identifier.name == "") Not_Declared(linenumber, (yyvsp[0].s_value));
			else (yyval.type) = identifier.data_type;
		}
#line 2322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 688 "parser.y" /* yacc.c:1646  */
    { (yyval.type) = 1; jasm_tab(cur_table->layer + 1); jasm << "sipush " << (yyvsp[0].i_value) << "\n"; }
#line 2328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 689 "parser.y" /* yacc.c:1646  */
    { (yyval.type) = 2; }
#line 2334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 690 "parser.y" /* yacc.c:1646  */
    { (yyval.type) = 3; }
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 691 "parser.y" /* yacc.c:1646  */
    { (yyval.type) = 5; jasm_tab(cur_table->layer + 1); jasm << "iconst_1" << "\n"; }
#line 2346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 692 "parser.y" /* yacc.c:1646  */
    { (yyval.type) = 5; jasm_tab(cur_table->layer + 1); jasm << "iconst_0" << "\n"; }
#line 2352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 696 "parser.y" /* yacc.c:1646  */
    { (yyval.s_value) = strdup("<"); }
#line 2358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 697 "parser.y" /* yacc.c:1646  */
    { (yyval.s_value) = strdup(">"); }
#line 2364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 702 "parser.y" /* yacc.c:1646  */
    { create("unknown"); }
#line 2370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 704 "parser.y" /* yacc.c:1646  */
    { cur_table = cur_table->previous; }
#line 2376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 709 "parser.y" /* yacc.c:1646  */
    { (yyval.type) = 1; }
#line 2382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 710 "parser.y" /* yacc.c:1646  */
    { (yyval.type) = 2; }
#line 2388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 711 "parser.y" /* yacc.c:1646  */
    { (yyval.type) = 3; }
#line 2394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 712 "parser.y" /* yacc.c:1646  */
    { (yyval.type) = 4; }
#line 2400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 713 "parser.y" /* yacc.c:1646  */
    { (yyval.type) = 5; }
#line 2406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 716 "parser.y" /* yacc.c:1646  */
    { (yyval.type) = 1; jasm << "sipush " << (yyvsp[0].i_value) << "\n"; }
#line 2412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 717 "parser.y" /* yacc.c:1646  */
    { (yyval.type) = 2; }
#line 2418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 718 "parser.y" /* yacc.c:1646  */
    { (yyval.type) = 3; }
#line 2424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 719 "parser.y" /* yacc.c:1646  */
    { (yyval.type) = 4; jasm << "ldc \"" << (yyvsp[0].s_value) << "\"\n"; }
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 720 "parser.y" /* yacc.c:1646  */
    { (yyval.type) = 5; jasm << "iconst_1" << "\n"; }
#line 2436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 721 "parser.y" /* yacc.c:1646  */
    { (yyval.type) = 6; jasm << "iconst_0" << "\n"; }
#line 2442 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2446 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 724 "parser.y" /* yacc.c:1906  */


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


