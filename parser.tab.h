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
     IDENTIFIER = 258,
     INTEGER_LITERAL = 259,
     STRING_LITERAL = 260,
     DHARMA = 261,
     ADHARMA = 262,
     TAPAS = 263,
     YATRA = 264,
     TYAGA = 265,
     NIVRITTI = 266,
     BHUMI = 267,
     NIYAM = 268,
     YAJNA = 269,
     AHVANA = 270,
     MOKSHA = 271,
     MANTRA = 272,
     SHRAVANA = 273,
     ARTHA = 274,
     JALA = 275,
     SATYA = 276,
     AKSHARA = 277,
     VANI = 278,
     YOGA = 279,
     VIYOGA = 280,
     BAL = 281,
     VIBHAJAN = 282,
     SHESHA = 283,
     SAMAVAYA = 284,
     VIBHAGA = 285,
     MAYA = 286,
     SEMICOLON = 287,
     ASSIGN = 288,
     LPAREN = 289,
     RPAREN = 290,
     LBRACE = 291,
     RBRACE = 292,
     LBRACKET = 293,
     RBRACKET = 294,
     COMMA = 295,
     SANKALPA = 296,
     EQ = 297,
     NE = 298,
     LT = 299,
     LE = 300,
     GT = 301,
     GE = 302,
     FLOAT_LITERAL = 303,
     PRAYASCHITTA = 304,
     SHANTI = 305,
     VIKALPA = 306
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define INTEGER_LITERAL 259
#define STRING_LITERAL 260
#define DHARMA 261
#define ADHARMA 262
#define TAPAS 263
#define YATRA 264
#define TYAGA 265
#define NIVRITTI 266
#define BHUMI 267
#define NIYAM 268
#define YAJNA 269
#define AHVANA 270
#define MOKSHA 271
#define MANTRA 272
#define SHRAVANA 273
#define ARTHA 274
#define JALA 275
#define SATYA 276
#define AKSHARA 277
#define VANI 278
#define YOGA 279
#define VIYOGA 280
#define BAL 281
#define VIBHAJAN 282
#define SHESHA 283
#define SAMAVAYA 284
#define VIBHAGA 285
#define MAYA 286
#define SEMICOLON 287
#define ASSIGN 288
#define LPAREN 289
#define RPAREN 290
#define LBRACE 291
#define RBRACE 292
#define LBRACKET 293
#define RBRACKET 294
#define COMMA 295
#define SANKALPA 296
#define EQ 297
#define NE 298
#define LT 299
#define LE 300
#define GT 301
#define GE 302
#define FLOAT_LITERAL 303
#define PRAYASCHITTA 304
#define SHANTI 305
#define VIKALPA 306




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 11 "parser.y"
{
    int ival;
    float fval;
    char *sval;
}
/* Line 1529 of yacc.c.  */
#line 157 "parser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

