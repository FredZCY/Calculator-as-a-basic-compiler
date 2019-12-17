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
     DOUBLE = 258,
     VARIABLE = 259,
     WHILE = 260,
     IF = 261,
     PRINT = 262,
     EXIT = 263,
     V = 264,
     W = 265,
     X = 266,
     Y = 267,
     Z = 268,
     RESET = 269,
     ABS = 270,
     SIN = 271,
     COS = 272,
     TAN = 273,
     SQRT = 274,
     CUBE = 275,
     EXP = 276,
     LOG = 277,
     LN = 278,
     CEIL = 279,
     FLOOR = 280,
     IFX = 281,
     ELSE = 282,
     NE = 283,
     EQ = 284,
     LE = 285,
     GE = 286,
     MOD = 287,
     POW = 288,
     UMINUS = 289,
     DECR = 290,
     INCR = 291
   };
#endif
/* Tokens.  */
#define DOUBLE 258
#define VARIABLE 259
#define WHILE 260
#define IF 261
#define PRINT 262
#define EXIT 263
#define V 264
#define W 265
#define X 266
#define Y 267
#define Z 268
#define RESET 269
#define ABS 270
#define SIN 271
#define COS 272
#define TAN 273
#define SQRT 274
#define CUBE 275
#define EXP 276
#define LOG 277
#define LN 278
#define CEIL 279
#define FLOOR 280
#define IFX 281
#define ELSE 282
#define NE 283
#define EQ 284
#define LE 285
#define GE 286
#define MOD 287
#define POW 288
#define UMINUS 289
#define DECR 290
#define INCR 291




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 20 "calc.y"
{
	double iValue;						/* integer value */
	char sIndex;					/* symbol table index */
	nodeType *nPtr;					/* node pointer */
}
/* Line 1529 of yacc.c.  */
#line 127 "calc.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

