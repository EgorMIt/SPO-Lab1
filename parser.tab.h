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
     IDENTIFIER = 272,
     STR = 273,
     COMMA = 274,
     CHAR = 275,
     BIN = 276,
     HEX = 277,
     DEC = 278,
     TRUE = 279,
     FALSE = 280,
     IF = 281,
     ELSE = 282,
     WHILE = 283,
     DO = 284,
     BREAK = 285,
     SEMICOLON = 286,
     LPAREN = 287,
     RPAREN = 288,
     LBRACE = 289,
     RBRACE = 290,
     LBRACKET = 291,
     RBRACKET = 292,
     TYPEDEF = 293,
     ARRAY_COMMAS = 294
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
#define IDENTIFIER 272
#define STR 273
#define COMMA 274
#define CHAR 275
#define BIN 276
#define HEX 277
#define DEC 278
#define TRUE 279
#define FALSE 280
#define IF 281
#define ELSE 282
#define WHILE 283
#define DO 284
#define BREAK 285
#define SEMICOLON 286
#define LPAREN 287
#define RPAREN 288
#define LBRACE 289
#define RBRACE 290
#define LBRACKET 291
#define RBRACKET 292
#define TYPEDEF 293
#define ARRAY_COMMAS 294




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 9 "source/parser.y"
{
    TreeNode* node;
}
/* Line 1529 of yacc.c.  */
#line 131 "parser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

