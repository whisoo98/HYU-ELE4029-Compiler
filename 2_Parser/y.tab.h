/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    SEMI = 258,
    COMMA = 259,
    ASSIGN = 260,
    EQ = 261,
    NE = 262,
    LT = 263,
    LE = 264,
    GT = 265,
    GE = 266,
    PLUS = 267,
    MINUS = 268,
    TIMES = 269,
    OVER = 270,
    LPAREN = 271,
    LCURLY = 272,
    LBRACE = 273,
    RCURLY = 274,
    RBRACE = 275,
    ID = 276,
    NUM = 277,
    INT = 278,
    IF = 279,
    VOID = 280,
    WHILE = 281,
    RETURN = 282,
    RPAREN = 283,
    ELSE = 284,
    ERROR = 285
  };
#endif
/* Tokens.  */
#define SEMI 258
#define COMMA 259
#define ASSIGN 260
#define EQ 261
#define NE 262
#define LT 263
#define LE 264
#define GT 265
#define GE 266
#define PLUS 267
#define MINUS 268
#define TIMES 269
#define OVER 270
#define LPAREN 271
#define LCURLY 272
#define LBRACE 273
#define RCURLY 274
#define RBRACE 275
#define ID 276
#define NUM 277
#define INT 278
#define IF 279
#define VOID 280
#define WHILE 281
#define RETURN 282
#define RPAREN 283
#define ELSE 284
#define ERROR 285

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
