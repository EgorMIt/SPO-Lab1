#include "node.h"
/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 9 "source/parser.y"
{
    TreeNode* node;
}
/* Line 1529 of yacc.c.  */
#line 147 "parser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

