/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PLUS = 258,
     MINUS = 259,
     STAR = 260,
     SLASH = 261,
     PERCENT = 262,
     EQUAL = 263,
     NOTEQUAL = 264,
     LESSTHAN = 265,
     GREATERTHAN = 266,
     LESSTHANEQ = 267,
     GREATERTHANEQ = 268,
     AND = 269,
     OR = 270,
     NOT = 271,
     OF = 272,
     ARRAY = 273,
     DEF = 274,
     END = 275,
     BEGIN_BLOCK = 276,
     IDENTIFIER = 277,
     STR = 278,
     COMMA = 279,
     DOUBLE_DOT = 280,
     CHAR = 281,
     BIN = 282,
     HEX = 283,
     DEC = 284,
     TRUE = 285,
     FALSE = 286,
     IF = 287,
     ELSE = 288,
     THAN = 289,
     WHILE = 290,
     UNTIL = 291,
     DO = 292,
     BREAK = 293,
     SEMICOLON = 294,
     LPAREN = 295,
     RPAREN = 296,
     LBRACE = 297,
     RBRACE = 298,
     LBRACKET = 299,
     RBRACKET = 300,
     TYPEDEF = 301,
     ARRAY_COMMAS = 302
   };
#endif
/* Tokens.  */
#define PLUS 258
#define MINUS 259
#define STAR 260
#define SLASH 261
#define PERCENT 262
#define EQUAL 263
#define NOTEQUAL 264
#define LESSTHAN 265
#define GREATERTHAN 266
#define LESSTHANEQ 267
#define GREATERTHANEQ 268
#define AND 269
#define OR 270
#define NOT 271
#define OF 272
#define ARRAY 273
#define DEF 274
#define END 275
#define BEGIN_BLOCK 276
#define IDENTIFIER 277
#define STR 278
#define COMMA 279
#define DOUBLE_DOT 280
#define CHAR 281
#define BIN 282
#define HEX 283
#define DEC 284
#define TRUE 285
#define FALSE 286
#define IF 287
#define ELSE 288
#define THAN 289
#define WHILE 290
#define UNTIL 291
#define DO 292
#define BREAK 293
#define SEMICOLON 294
#define LPAREN 295
#define RPAREN 296
#define LBRACE 297
#define RBRACE 298
#define LBRACKET 299
#define RBRACKET 300
#define TYPEDEF 301
#define ARRAY_COMMAS 302




/* Copy the first part of user declarations.  */
#line 1 "source/parser.y"

#include "parser.tab.h"
#include "error.h"

#define YYDEBUG 1


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 9 "source/parser.y"
{
    TreeNode* node;
}
/* Line 193 of yacc.c.  */
#line 201 "parser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 214 "parser.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   686

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNRULES -- Number of states.  */
#define YYNSTATES  167

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    12,    15,    16,    22,    23,
      25,    29,    32,    33,    38,    40,    42,    44,    46,    48,
      50,    52,    54,    56,    58,    60,    63,    64,    66,    72,
      78,    82,    85,    86,    90,    94,    98,   102,   105,   108,
     113,   118,   123,   128,   131,   134,   138,   140,   142,   144,
     146,   148,   150,   152,   154,   158,   162,   166,   170,   174,
     179,   183,   187,   191,   195,   199,   203,   207,   210,   213,
     216,   220,   225,   227,   228,   232,   234,   239,   243,   245,
     249,   251,   253,   255,   257,   259,   261,   263,   265,   267,
     271,   273,   275,   277
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,    -1,    49,    50,    -1,    19,    52,    59,
      20,    -1,    50,    51,    -1,    -1,    22,    40,    53,    41,
      55,    -1,    -1,    54,    -1,    54,    24,    53,    -1,    22,
      55,    -1,    -1,    40,    17,    56,    41,    -1,    57,    -1,
      60,    -1,    61,    -1,    46,    -1,    84,    -1,    62,    -1,
      65,    -1,    66,    -1,    64,    -1,    67,    -1,    68,    -1,
      58,    59,    -1,    -1,    22,    -1,    56,    18,    44,    29,
      45,    -1,    32,    70,    34,    58,    63,    -1,    33,    58,
      63,    -1,    33,    58,    -1,    -1,    42,    59,    43,    -1,
      21,    59,    20,    -1,    42,    51,    43,    -1,    21,    51,
      20,    -1,    42,    43,    -1,    21,    20,    -1,    35,    70,
      59,    20,    -1,    36,    70,    59,    20,    -1,    58,    35,
      70,    39,    -1,    58,    36,    70,    39,    -1,    38,    39,
      -1,    70,    39,    -1,    70,     8,    70,    -1,    72,    -1,
      71,    -1,    73,    -1,    74,    -1,    77,    -1,    80,    -1,
      81,    -1,    69,    -1,    70,     3,    70,    -1,    70,     4,
      70,    -1,    70,     5,    70,    -1,    70,     6,    70,    -1,
      70,     7,    70,    -1,    70,     8,     8,    70,    -1,    70,
       9,    70,    -1,    70,    10,    70,    -1,    70,    11,    70,
      -1,    70,    12,    70,    -1,    70,    13,    70,    -1,    70,
      14,    70,    -1,    70,    15,    70,    -1,     3,    70,    -1,
       4,    70,    -1,    16,    70,    -1,    40,    70,    41,    -1,
      22,    40,    75,    41,    -1,    76,    -1,    -1,    70,    24,
      76,    -1,    70,    -1,    70,    44,    79,    45,    -1,    70,
      25,    70,    -1,    70,    -1,    78,    24,    79,    -1,    78,
      -1,    22,    -1,    30,    -1,    31,    -1,    23,    -1,    26,
      -1,    28,    -1,    27,    -1,    29,    -1,    83,    24,    82,
      -1,    83,    -1,    22,    -1,    69,    -1,    56,    82,    39,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    74,    74,    75,    77,    79,    80,    86,    88,    89,
      90,    92,    94,    95,   101,   102,   103,   105,   111,   112,
     113,   114,   115,   116,   117,   119,   120,   123,   125,   131,
     133,   134,   135,   139,   140,   141,   142,   143,   144,   146,
     147,   149,   150,   152,   154,   156,   158,   159,   160,   161,
     162,   163,   164,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   181,   182,   183,
     185,   187,   189,   190,   192,   193,   195,   197,   198,   200,
     201,   203,   205,   206,   207,   208,   209,   210,   211,   217,
     218,   220,   221,   223
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PLUS", "MINUS", "STAR", "SLASH",
  "PERCENT", "EQUAL", "NOTEQUAL", "LESSTHAN", "GREATERTHAN", "LESSTHANEQ",
  "GREATERTHANEQ", "AND", "OR", "NOT", "OF", "ARRAY", "DEF", "END",
  "BEGIN_BLOCK", "IDENTIFIER", "STR", "COMMA", "DOUBLE_DOT", "CHAR", "BIN",
  "HEX", "DEC", "TRUE", "FALSE", "IF", "ELSE", "THAN", "WHILE", "UNTIL",
  "DO", "BREAK", "SEMICOLON", "LPAREN", "RPAREN", "LBRACE", "RBRACE",
  "LBRACKET", "RBRACKET", "TYPEDEF", "ARRAY_COMMAS", "$accept", "source",
  "sourceItem", "listSourceItem", "funcSignature", "listArgDef", "argDef",
  "optionalTypeRef", "typeRef", "builtin", "statement", "listStatement",
  "custom", "array", "if", "optionalElseStatement", "block", "loop",
  "repeat", "break", "expression", "assignment", "expr", "binary", "unary",
  "braces", "call", "optionalListExpr", "listExpr", "slice", "range",
  "listRange", "place", "literal", "listVarDeclared",
  "listVarDeclaredItem", "var", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    49,    50,    51,    51,    52,    53,    53,
      53,    54,    55,    55,    56,    56,    56,    57,    58,    58,
      58,    58,    58,    58,    58,    59,    59,    60,    61,    62,
      63,    63,    63,    64,    64,    64,    64,    64,    64,    65,
      65,    66,    66,    67,    68,    69,    70,    70,    70,    70,
      70,    70,    70,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    72,    72,    72,
      73,    74,    75,    75,    76,    76,    77,    78,    78,    79,
      79,    80,    81,    81,    81,    81,    81,    81,    81,    82,
      82,    83,    83,    84
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     4,     2,     0,     5,     0,     1,
       3,     2,     0,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     0,     1,     5,     5,
       3,     2,     0,     3,     3,     3,     3,     2,     2,     4,
       4,     4,     4,     2,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     4,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       3,     4,     1,     0,     3,     1,     4,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     3,     0,    26,     8,     0,     0,
       0,     0,    81,    84,    85,    87,    86,    88,    82,    83,
       0,     0,     0,     0,     0,     0,    17,     0,    14,    26,
       0,    15,    16,    19,    22,    20,    21,    23,    24,    53,
       0,    47,    46,    48,    49,    50,    51,    52,    18,    12,
       0,     9,    81,    67,    68,    69,    38,     6,     0,     0,
      73,     0,    26,    26,    43,     0,    37,     0,     0,     0,
      81,    53,     0,     0,    90,     0,     0,    25,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    44,     0,     0,    11,    12,     8,     5,    36,
      34,    75,     0,    72,     0,     0,     0,     0,     0,    70,
      35,    33,     0,    93,     0,    26,    26,    54,    55,    56,
      57,    58,     0,    45,    60,    61,    62,    63,    64,    65,
      66,    78,    80,     0,     0,     7,    10,     0,    71,    32,
      54,    55,    39,    40,     0,    89,    41,    42,    59,     0,
       0,    76,    27,     0,    74,     0,     0,     0,    29,    28,
      77,    79,    13,    31,     0,     0,    30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    57,    58,     6,    50,    51,    95,    27,    28,
      29,   107,    31,    32,    33,   158,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,   102,   103,    45,
     132,   133,    46,    47,    73,    74,    48
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -100
static const yytype_int16 yypact[] =
{
    -100,     6,  -100,    -7,  -100,   -22,     7,    -2,   630,   630,
     630,   279,   104,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
     630,   630,   630,   -18,   630,   319,  -100,   598,  -100,   360,
       4,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
     404,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,   -13,
      -9,    30,    17,   579,   579,   579,  -100,    36,    38,    43,
     630,   417,   235,   235,  -100,   459,  -100,    21,    23,    25,
      22,    20,   579,    26,    46,   630,   630,  -100,  -100,   630,
     630,   630,   630,   630,   614,   630,   630,   630,   630,   630,
     630,   630,  -100,   630,    67,  -100,   -13,    -2,  -100,  -100,
    -100,   472,    45,  -100,     7,   630,   630,    68,    69,  -100,
    -100,  -100,    58,  -100,   646,   147,   191,   579,   579,   579,
     579,   579,   630,   579,   579,   579,   579,   579,   579,   579,
     579,   514,    66,    47,   -15,  -100,  -100,   630,  -100,    15,
     579,   579,  -100,  -100,    48,  -100,  -100,  -100,   579,   630,
     630,  -100,  -100,    -1,  -100,     7,   630,   630,  -100,  -100,
     579,  -100,  -100,    15,   537,   556,  -100
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -100,  -100,    93,   -16,  -100,     2,  -100,     0,   -39,  -100,
     -99,    -3,  -100,  -100,  -100,   -63,  -100,  -100,  -100,  -100,
    -100,   -23,    -8,  -100,  -100,  -100,  -100,  -100,   -36,  -100,
    -100,   -48,  -100,  -100,   -11,  -100,  -100
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -93
static const yytype_int16 yytable[] =
{
      53,    54,    55,    30,    71,   139,     2,   152,    59,    67,
       8,     9,    61,    62,    63,     5,    65,    69,     7,    72,
      49,    64,    68,    10,    78,     3,    77,    94,    11,    12,
      13,    26,    96,    14,    15,    16,    17,    18,    19,    20,
     162,    98,    21,    22,   -92,    23,   -91,    24,   155,    25,
     156,   157,   101,    26,    97,     3,   163,    60,    99,   -92,
     108,   -91,    60,   100,   110,   113,   111,   115,   116,   112,
     114,   117,   118,   119,   120,   121,   123,   124,   125,   126,
     127,   128,   129,   130,   134,   131,   138,   144,   142,   143,
     150,    71,   151,   159,     4,   153,   135,   140,   141,   136,
     166,   154,   161,   145,     0,     0,    72,   -27,   -27,     0,
       0,     0,     0,   108,   148,     0,     0,     0,     0,     0,
     -27,     0,   -27,     0,     0,     0,   -27,   -27,     0,   101,
     -27,   -27,   -27,   -27,   -27,   -27,     0,     0,     0,     0,
       0,   160,   131,     0,    60,     0,     0,     0,   164,   165,
     105,   106,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    10,     0,     0,     0,     0,    11,    12,
      13,     0,     0,    14,    15,    16,    17,    18,    19,    20,
       0,     0,    21,    22,     0,    23,   146,    24,     0,    25,
       0,    93,     0,    26,   105,   106,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    10,     0,     0,
       0,     0,    11,    12,    13,     0,     0,    14,    15,    16,
      17,    18,    19,    20,     0,     0,    21,    22,     0,    23,
     147,    24,     0,    25,     0,    93,     0,    26,   105,   106,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    10,     0,     0,     0,     0,    11,    12,    13,     0,
       0,    14,    15,    16,    17,    18,    19,    20,     0,     0,
      21,    22,     0,    23,     0,    24,     0,    25,     0,    93,
       0,    26,     8,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,     0,     0,     3,    56,
      11,    12,    13,     0,     0,    14,    15,    16,    17,    18,
      19,    20,     0,     0,    21,    22,     0,    23,     0,    24,
       0,    25,     8,     9,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,     0,     0,     3,     0,
      11,    12,    13,     0,     0,    14,    15,    16,    17,    18,
      19,    20,     0,     0,    21,    22,     0,    23,     0,    24,
       0,    25,    66,     8,     9,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,    11,    12,    13,     0,     0,    14,    15,    16,    17,
      18,    19,    20,     0,     0,    75,    76,     0,    23,     0,
      24,     0,    25,     0,     0,     0,    26,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,    93,     0,
       0,   104,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,     0,     0,
       0,     0,     0,     0,     0,     0,   137,     0,     0,     0,
     109,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   149,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,     0,     0,     0,     0,     0,    93,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,     0,     0,     0,     0,   146,     0,     0,     0,
       0,    93,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,   147,     0,     0,     0,     0,
      93,     8,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,     0,    69,     8,     9,     0,
      70,    13,   122,    93,    14,    15,    16,    17,    18,    19,
      10,     0,     0,     8,     9,     0,    52,    13,    24,     0,
      14,    15,    16,    17,    18,    19,    10,     0,     0,     8,
       9,     0,    52,    13,    24,     0,    14,    15,    16,    17,
      18,    19,    10,     0,     0,     0,     0,     0,    70,    13,
      24,     0,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,    24
};

static const yytype_int16 yycheck[] =
{
       8,     9,    10,     6,    27,   104,     0,    22,    11,    25,
       3,     4,    20,    21,    22,    22,    24,    18,    40,    27,
      22,    39,    25,    16,    20,    19,    29,    40,    21,    22,
      23,    46,    41,    26,    27,    28,    29,    30,    31,    32,
      41,    57,    35,    36,    24,    38,    24,    40,    33,    42,
      35,    36,    60,    46,    24,    19,   155,    40,    20,    39,
      63,    39,    40,    20,    43,    39,    43,    75,    76,    44,
      24,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    17,    93,    41,    29,    20,    20,
      24,   114,    45,    45,     1,   134,    96,   105,   106,    97,
     163,   137,   150,   114,    -1,    -1,   114,     3,     4,    -1,
      -1,    -1,    -1,   116,   122,    -1,    -1,    -1,    -1,    -1,
      16,    -1,    18,    -1,    -1,    -1,    22,    23,    -1,   137,
      26,    27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,   149,   150,    -1,    40,    -1,    -1,    -1,   156,   157,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    21,    22,
      23,    -1,    -1,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    36,    -1,    38,    39,    40,    -1,    42,
      -1,    44,    -1,    46,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    21,    22,    23,    -1,    -1,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    36,    -1,    38,
      39,    40,    -1,    42,    -1,    44,    -1,    46,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,
      -1,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    36,    -1,    38,    -1,    40,    -1,    42,    -1,    44,
      -1,    46,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    36,    -1,    38,    -1,    40,
      -1,    42,     3,     4,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    19,    -1,
      21,    22,    23,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    36,    -1,    38,    -1,    40,
      -1,    42,    43,     3,     4,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,
      -1,    21,    22,    23,    -1,    -1,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    36,    -1,    38,    -1,
      40,    -1,    42,    -1,    -1,    -1,    46,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      41,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,    44,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    44,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    39,    -1,    -1,    -1,    -1,
      44,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    -1,    18,     3,     4,    -1,
      22,    23,     8,    44,    26,    27,    28,    29,    30,    31,
      16,    -1,    -1,     3,     4,    -1,    22,    23,    40,    -1,
      26,    27,    28,    29,    30,    31,    16,    -1,    -1,     3,
       4,    -1,    22,    23,    40,    -1,    26,    27,    28,    29,
      30,    31,    16,    -1,    -1,    -1,    -1,    -1,    22,    23,
      40,    -1,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    49,     0,    19,    50,    22,    52,    40,     3,     4,
      16,    21,    22,    23,    26,    27,    28,    29,    30,    31,
      32,    35,    36,    38,    40,    42,    46,    56,    57,    58,
      59,    60,    61,    62,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    77,    80,    81,    84,    22,
      53,    54,    22,    70,    70,    70,    20,    50,    51,    59,
      40,    70,    70,    70,    39,    70,    43,    51,    59,    18,
      22,    69,    70,    82,    83,    35,    36,    59,    20,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    39,    44,    40,    55,    41,    24,    51,    20,
      20,    70,    75,    76,    34,     3,     4,    59,    59,    41,
      43,    43,    44,    39,    24,    70,    70,    70,    70,    70,
      70,    70,     8,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    78,    79,    17,    55,    53,    24,    41,    58,
      70,    70,    20,    20,    29,    82,    39,    39,    70,    25,
      24,    45,    22,    56,    76,    33,    35,    36,    63,    45,
      70,    79,    41,    58,    70,    70,    63
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 74 "source/parser.y"
    {{(yyval.node) = NULL;};}
    break;

  case 3:
#line 75 "source/parser.y"
    {{(yyval.node) = createNode("source", (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node), "");};}
    break;

  case 4:
#line 77 "source/parser.y"
    {{(yyval.node) = createNode("sourceItem", (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), "");};}
    break;

  case 5:
#line 79 "source/parser.y"
    {{(yyval.node) = createNode("listSourceItem", (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node), "");};}
    break;

  case 6:
#line 80 "source/parser.y"
    {{(yyval.node) = NULL;};}
    break;

  case 7:
#line 86 "source/parser.y"
    {{(yyval.node) = createNode("funcSignature", (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node), (yyvsp[(1) - (5)].node)->value);};}
    break;

  case 8:
#line 88 "source/parser.y"
    {{(yyval.node) = NULL;};}
    break;

  case 9:
#line 89 "source/parser.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 10:
#line 90 "source/parser.y"
    {{(yyval.node) = createNode("listArgDef", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 11:
#line 92 "source/parser.y"
    {{(yyval.node) = createNode("argDef", (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node), "");};}
    break;

  case 12:
#line 94 "source/parser.y"
    {{ (yyval.node) = NULL; };}
    break;

  case 13:
#line 95 "source/parser.y"
    {{(yyval.node) = (yyvsp[(3) - (4)].node);};}
    break;

  case 14:
#line 101 "source/parser.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 15:
#line 102 "source/parser.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 16:
#line 103 "source/parser.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 17:
#line 105 "source/parser.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 18:
#line 111 "source/parser.y"
    {{(yyval.node) =  (yyvsp[(1) - (1)].node);};}
    break;

  case 19:
#line 112 "source/parser.y"
    {{(yyval.node) =  (yyvsp[(1) - (1)].node);};}
    break;

  case 20:
#line 113 "source/parser.y"
    {{(yyval.node) =  (yyvsp[(1) - (1)].node);};}
    break;

  case 21:
#line 114 "source/parser.y"
    {{(yyval.node) =  (yyvsp[(1) - (1)].node);};}
    break;

  case 22:
#line 115 "source/parser.y"
    {{(yyval.node) =  (yyvsp[(1) - (1)].node);};}
    break;

  case 23:
#line 116 "source/parser.y"
    {{(yyval.node) =  (yyvsp[(1) - (1)].node);};}
    break;

  case 24:
#line 117 "source/parser.y"
    {{(yyval.node) =  (yyvsp[(1) - (1)].node);};}
    break;

  case 25:
#line 119 "source/parser.y"
    {{(yyval.node) = createNode("listStatement", (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node), "");};}
    break;

  case 26:
#line 120 "source/parser.y"
    {{(yyval.node) = NULL;};}
    break;

  case 27:
#line 123 "source/parser.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 28:
#line 125 "source/parser.y"
    {{(yyval.node) = createNode("array", (yyvsp[(1) - (5)].node), NULL, (yyvsp[(4) - (5)].node)->value);};}
    break;

  case 29:
#line 131 "source/parser.y"
    {{(yyval.node) = createNode("if", (yyvsp[(3) - (5)].node), createNode("ifStatements", (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node), ""), "");};}
    break;

  case 30:
#line 133 "source/parser.y"
    {{(yyval.node) = createNode("else", (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 31:
#line 134 "source/parser.y"
    {{(yyval.node) = createNode("else", (yyvsp[(2) - (2)].node), NULL, "");};}
    break;

  case 32:
#line 135 "source/parser.y"
    {{(yyval.node) = NULL;};}
    break;

  case 33:
#line 139 "source/parser.y"
    {{(yyval.node) = createNode("block", (yyvsp[(2) - (3)].node), NULL, "");};}
    break;

  case 34:
#line 140 "source/parser.y"
    {{(yyval.node) = createNode("block", (yyvsp[(2) - (3)].node), NULL, "");};}
    break;

  case 35:
#line 141 "source/parser.y"
    {{(yyval.node) = createNode("block", (yyvsp[(2) - (3)].node), NULL, "");};}
    break;

  case 36:
#line 142 "source/parser.y"
    {{(yyval.node) = createNode("block", (yyvsp[(2) - (3)].node), NULL, "");};}
    break;

  case 37:
#line 143 "source/parser.y"
    {{(yyval.node) = createNode("block", NULL, NULL, "");};}
    break;

  case 38:
#line 144 "source/parser.y"
    {{(yyval.node) = createNode("block", NULL, NULL, "");};}
    break;

  case 39:
#line 146 "source/parser.y"
    {{(yyval.node) = createNode("loop", (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), "");};}
    break;

  case 40:
#line 147 "source/parser.y"
    {{(yyval.node) = createNode("loop", (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), "");};}
    break;

  case 41:
#line 149 "source/parser.y"
    {{(yyval.node) = createNode("loop", (yyvsp[(3) - (4)].node), (yyvsp[(2) - (4)].node), "");};}
    break;

  case 42:
#line 150 "source/parser.y"
    {{(yyval.node) = createNode("loop", (yyvsp[(3) - (4)].node), (yyvsp[(2) - (4)].node), "");};}
    break;

  case 43:
#line 152 "source/parser.y"
    {{(yyval.node) = createNode("break", NULL, NULL, "");};}
    break;

  case 44:
#line 154 "source/parser.y"
    {{(yyval.node) = (yyvsp[(1) - (2)].node);};}
    break;

  case 45:
#line 156 "source/parser.y"
    {{(yyval.node) = createNode("assigment", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 46:
#line 158 "source/parser.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 47:
#line 159 "source/parser.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 48:
#line 160 "source/parser.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 49:
#line 161 "source/parser.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 50:
#line 162 "source/parser.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 51:
#line 163 "source/parser.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 52:
#line 164 "source/parser.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 53:
#line 166 "source/parser.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 54:
#line 167 "source/parser.y"
    {{(yyval.node) = createNode("PLUS", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 55:
#line 168 "source/parser.y"
    {{(yyval.node) = createNode("MINUS", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 56:
#line 169 "source/parser.y"
    {{(yyval.node) = createNode("STAR", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 57:
#line 170 "source/parser.y"
    {{(yyval.node) = createNode("SLASH", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 58:
#line 171 "source/parser.y"
    {{(yyval.node) = createNode("PERCENT", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 59:
#line 172 "source/parser.y"
    {{(yyval.node) = createNode("EQUALITY", (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node), "");};}
    break;

  case 60:
#line 173 "source/parser.y"
    {{(yyval.node) = createNode("NOTEQUAL", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 61:
#line 174 "source/parser.y"
    {{(yyval.node) = createNode("LESSTHAN", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 62:
#line 175 "source/parser.y"
    {{(yyval.node) = createNode("GREATERTHAN", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 63:
#line 176 "source/parser.y"
    {{(yyval.node) = createNode("LESSTHANEQ", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 64:
#line 177 "source/parser.y"
    {{(yyval.node) = createNode("GREATERTHANEQ", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 65:
#line 178 "source/parser.y"
    {{(yyval.node) = createNode("AND", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 66:
#line 179 "source/parser.y"
    {{(yyval.node) = createNode("OR", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 67:
#line 181 "source/parser.y"
    {{(yyval.node) = createNode("PLUS", (yyvsp[(2) - (2)].node), NULL, "");};}
    break;

  case 68:
#line 182 "source/parser.y"
    {{(yyval.node) = createNode("MINUS", (yyvsp[(2) - (2)].node), NULL, "");};}
    break;

  case 69:
#line 183 "source/parser.y"
    {{(yyval.node) = createNode("NOT", (yyvsp[(2) - (2)].node), NULL, "");};}
    break;

  case 70:
#line 185 "source/parser.y"
    {{(yyval.node) = createNode("braces", (yyvsp[(2) - (3)].node), NULL, "");};}
    break;

  case 71:
#line 187 "source/parser.y"
    {{(yyval.node) = createNode("CALL", (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), "");};}
    break;

  case 72:
#line 189 "source/parser.y"
    {{(yyval.node) = createNode("optionalListExpr", (yyvsp[(1) - (1)].node), NULL, "");};}
    break;

  case 73:
#line 190 "source/parser.y"
    {{(yyval.node) = createNode("optionalListExpr", NULL, NULL, "");};}
    break;

  case 74:
#line 192 "source/parser.y"
    {{(yyval.node) = createNode("listExpr", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 75:
#line 193 "source/parser.y"
    {{(yyval.node) = createNode("listExpr", (yyvsp[(1) - (1)].node), NULL, "");};}
    break;

  case 76:
#line 195 "source/parser.y"
    {{(yyval.node) = createNode("slice", (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), "");};}
    break;

  case 77:
#line 197 "source/parser.y"
    {{(yyval.node) = createNode("range", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 78:
#line 198 "source/parser.y"
    {{(yyval.node) = createNode("range", (yyvsp[(1) - (1)].node), NULL, "");};}
    break;

  case 79:
#line 200 "source/parser.y"
    {{(yyval.node) = createNode("listRange", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 80:
#line 201 "source/parser.y"
    {{(yyval.node) = createNode("listExpr", (yyvsp[(1) - (1)].node), NULL, "");};}
    break;

  case 81:
#line 203 "source/parser.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 82:
#line 205 "source/parser.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 83:
#line 206 "source/parser.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 84:
#line 207 "source/parser.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 85:
#line 208 "source/parser.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 86:
#line 209 "source/parser.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 87:
#line 210 "source/parser.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 88:
#line 211 "source/parser.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 89:
#line 217 "source/parser.y"
    {{(yyval.node) = createNode("listVarDeclared", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 90:
#line 218 "source/parser.y"
    {{(yyval.node) = createNode("listVarDeclared", (yyvsp[(1) - (1)].node), NULL, "");};}
    break;

  case 91:
#line 220 "source/parser.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 92:
#line 221 "source/parser.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 93:
#line 223 "source/parser.y"
    {{(yyval.node) = createNode("var", (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), "");};}
    break;


/* Line 1267 of yacc.c.  */
#line 2128 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 224 "source/parser.y"

