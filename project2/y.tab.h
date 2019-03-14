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
    ANDnum = 258,
    CLASSnum = 259,
    ASSGNnum = 260,
    COMMAnum = 261,
    DECLARATIONnum = 262,
    DIVIDEnum = 263,
    DOTnum = 264,
    ELSEnum = 265,
    ENDDECLARATIONSnum = 266,
    EQnum = 267,
    EQUALnum = 268,
    GEnum = 269,
    GTnum = 270,
    ICONSTnum = 271,
    IDnum = 272,
    IFnum = 273,
    INTnum = 274,
    LBRACEnum = 275,
    LBRACnum = 276,
    LEnum = 277,
    LPARENnum = 278,
    LTnum = 279,
    METHODnum = 280,
    MINUSnum = 281,
    NEnum = 282,
    NOTnum = 283,
    ORnum = 284,
    PLUSnum = 285,
    PROGRAMnum = 286,
    RBRACEnum = 287,
    RBRACnum = 288,
    RETURNnum = 289,
    RPARENnum = 290,
    SCONSTnum = 291,
    SEMInum = 292,
    TIMESnum = 293,
    VALnum = 294,
    VOIDnum = 295,
    WHILEnum = 296,
    EOFnum = 297
  };
#endif
/* Tokens.  */
#define ANDnum 258
#define CLASSnum 259
#define ASSGNnum 260
#define COMMAnum 261
#define DECLARATIONnum 262
#define DIVIDEnum 263
#define DOTnum 264
#define ELSEnum 265
#define ENDDECLARATIONSnum 266
#define EQnum 267
#define EQUALnum 268
#define GEnum 269
#define GTnum 270
#define ICONSTnum 271
#define IDnum 272
#define IFnum 273
#define INTnum 274
#define LBRACEnum 275
#define LBRACnum 276
#define LEnum 277
#define LPARENnum 278
#define LTnum 279
#define METHODnum 280
#define MINUSnum 281
#define NEnum 282
#define NOTnum 283
#define ORnum 284
#define PLUSnum 285
#define PROGRAMnum 286
#define RBRACEnum 287
#define RBRACnum 288
#define RETURNnum 289
#define RPARENnum 290
#define SCONSTnum 291
#define SEMInum 292
#define TIMESnum 293
#define VALnum 294
#define VOIDnum 295
#define WHILEnum 296
#define EOFnum 297

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
