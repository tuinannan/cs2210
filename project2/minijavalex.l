%{           

/* Name: Yanan Guo */

#include <stdio.h>  
#include <string.h>
#include "proj2.h"
#include "y.tab.h"
#include "toString.h"
#define LIMIT1 500    
extern char* yytext;
YYSTYPE yylval;
/*required global var */
int yyline = 1;
int yycolumn = 1;
int yylength = 0;

/* assisted global var*/
char a[] = " ";    
int SymbolNum = 0;
char *SymbolChart[LIMIT1];
int SymbolPositionNext[LIMIT1];
int SymbolLength[LIMIT1];
int AfterProcessLeng;
int flag;
int SearchIndex_Global;

/* This function is to add a new string or identifier in string table */

int TableInsert( char *j)
 {
    char *p = (char*)malloc(AfterProcessLeng * sizeof(char));
    for (int i = 0; i < AfterProcessLeng; i++)
    {
        p[i] = j[i];
    }
    SymbolChart[SymbolNum] = p;
    if(SymbolNum == 0) SymbolPositionNext[SymbolNum] = AfterProcessLeng + 1;
    else SymbolPositionNext[SymbolNum] = SymbolPositionNext[SymbolNum - 1] + AfterProcessLeng + 1;
    SymbolLength[SymbolNum] = AfterProcessLeng;
    SymbolNum ++;
    
    if(SymbolNum == 1) return 0;
    else return SymbolPositionNext[SymbolNum - 2];
 }


/* This function is to deal with the single quotes and escape sequences in
 * string constants*/
char* PreProcessString()
 {
    flag = 0;
    char *q = (char*)malloc(yyleng * sizeof(char));
    int mark [100] = {0};
    AfterProcessLeng = yyleng;
    for (int i = 0; i< yyleng; i++) q[i] = yytext[i];
    for (int i = 0; i< yyleng; i++)
    {
        if (i == 0 || i == (yyleng - 1)) 
        {
            if ( i == 0)
            {
                for(int j = 0; j < AfterProcessLeng - 1; j++) q[j] = yytext[j+1];
                AfterProcessLeng --;
            }
        
            else AfterProcessLeng --;
            flag ++;
        }
        else if (yytext[i] == '\\')
        {
            if (i > 0 && (mark[i] ==0))
            {
                if (yytext[i+1] == '\'' || yytext[i+1] =='\\' )
                {   int j;
                    for (j = i - flag; j < AfterProcessLeng-1; j++) 
                    {    
                        q[j] = yytext[j+1+flag];
                    }
                    AfterProcessLeng --;
                    flag ++;
                    mark[i] = 1;
                    mark[i+1] = 1;
                }
                else if(yytext[i+1] == 'n' || yytext[i+1] == 't')
                {
                    if (yytext[i+1] == 'n') q[i-flag] = 10;
                    else q[i-flag] = 9;
                for (int j = i+1-flag; j < AfterProcessLeng-1; j++) q[j] = yytext[j+1+flag];
                AfterProcessLeng --;
                flag ++;
                
                }
            
            }
        }
    }
    return q;
 
 }

/* This function is to build a string to store the identifier */
 char * PreProcessID() 
 {
     char *n = (char*)malloc(yyleng * sizeof(char));
     AfterProcessLeng = yyleng;
     for(int i = 0; i < yyleng; i++) n[i] = yytext[i];
     return n;
 }

/* This function is to check is the string or identifier already in the string
 * table*/
 int SearchTable(char *a)
 {
    int SearchFlag = 0;
    
    
    for(int i = 0; i < SymbolNum; i++)
    {
        int j;
        for (j = 0; j < SymbolLength[i]; j++)
        {
            if (a[j] != SymbolChart[i][j]) break;
        }
        if (j == SymbolLength[i] && (yyleng == SymbolLength[i]))
        {
            if (strlen(SymbolChart[i]) != 0)
            {
                SearchFlag = 1;
                SearchIndex_Global = SymbolPositionNext[i-1];
            }
            else if(AfterProcessLeng == 0)
            {
                SearchFlag = 1;
                SearchIndex_Global = SymbolPositionNext[i-1];
            }
        }
    }

   
    return SearchFlag;
 
 }

 /* This function is used to print all the tokens and the corresponding position
  * (line and column) */
 void printf_result (char* KeyWord)
 {
    char *m; 
    int SearchResult;
    int TableIndex;
    if (strcmp(KeyWord, "EOFnum") != 0) yycolumn += yyleng;
    
    if(strcmp(KeyWord, "ICONSTnum") == 0)
    {
        yylval.intg = atoi(yytext);
    }
    
    if (strcmp(KeyWord, "IDnum") == 0 || strcmp(KeyWord, "SCONSTnum") == 0)
    {
        if (strcmp(KeyWord, "SCONSTnum") == 0) 
        {    
            m = PreProcessString();
        }
        else m =PreProcessID();
        SearchResult = SearchTable(m); 
        if (SearchResult == 0) TableIndex = TableInsert(m);
        else TableIndex = SearchIndex_Global;
        yylval.intg = TableIndex; 
        printf("%-10d%-10d%-20s%-10d\n", yyline, yycolumn, KeyWord, TableIndex);
        
        if(TableIndex == 0) printf("aaaaaa %s\n", SymbolChart[0]);
        else{
        for (int i =0; i<100; i++)
        {
            if(SymbolPositionNext[i] == TableIndex)
            {
                printf("aaaaaa %s\n", SymbolChart[i+1]);
                break;
            }
        }
        }
    }
    
    
    else
    {

        printf("%-10d%-10d%-20s%-10s\n", yyline, yycolumn, KeyWord, a);

    }
    
 }

 /* called by ErrorHandler function */
 void BadStringHandler()
 {
    printf("Error: Unmatched string constant, at line %d column %d\n", yyline, yycolumn);
    yyline ++;
    yycolumn = 1;
    
 }
/* called by ErrorHandler function */
 void BadIDHandler()
 {
    printf("Error: Malformed identifier '%s', at line %d column %d\n", yytext, yyline, yycolumn);
    yycolumn += yyleng;
 
 }
/* called by ErrorHandler function */
 void ElseErrorHandler()
 {
    printf("Error: Undefined Symbol '%s', at line %d column %d\n", yytext, yyline, yycolumn);
 }
/* called by ErrorHandler function */
 void BadCommHandler()
 {
    printf("Error:  EOF found in comment at line %d column %d\n", yyline, yycolumn);
 }
/* deal with all the errors */
void ErrorHandler(char *Keyword)
{
    if (strcmp(Keyword, "BADID") == 0) BadIDHandler();
    else if(strcmp(Keyword, "BADSCONST") == 0) BadStringHandler();
    else if (strcmp(Keyword, "BADCOMMENT") == 0) BadCommHandler();
    else ElseErrorHandler();


}
/* this function is used to calculate the yyline and yycolumn change in comment */
 void ProcessComment()
 {
    for (int i = 0; i < yyleng; i++)
    {
        if (yytext[i] == 10) 
        {
            yyline ++;
            yycolumn = 1;
        }
        else yycolumn ++;
    }
 }


extern FILE *yyin;

%}

/* regular expression */


METHODnum               method
PROGRAMnum              program
INTnum                  int
VALnum                  val
WHILEnum                while
CLASSnum                class
ELSEnum                 else
IFnum                   if
VOIDnum                 void
DECLARATIONnum          declarations
ENDDECLARATIONSnum      enddeclarations
RETURNnum		return

ANDnum                  &&
ASSGNnum                :=
DOTnum                  \.
EQUALnum                =
GTnum                   >
IDnum                   [a-zA-Z][a-zA-Z0-9]*
BADID                   [0-9]+[a-zA-Z]+[a-zA-Z0-9]*
LBRACnum                \[
LPARENnum               \(
NEnum                   !=
ORnum                   \|\|
RBRACnum                \]
RPARENnum               \)    
SEMInum                 \;
COMMAnum                ,
DIVIDEnum               \/
EQnum                   ==
GEnum                   >=
ICONSTnum               [1-9][0-9]*|0
LBRACEnum               \{
LEnum                   <=
LTnum                   <
MINUSnum                \-
NOTnum                  !
PLUSnum                 \+
RBRACEnum               \}
SCONSTnum               \'(\\'|[^\'\n])*\'
BADSCONST               \'[^\n\']*\n
TIMESnum                \*
COMMENT                 \/\*[^\*\/]*\*\/
BADCOMMENT              \/\*[^\*\/]*    
Whitespace	        	[\n]
Whitespace2             [ \t]*
ElseError               .    
%%

{VOIDnum}                 {printf_result("VOIDnum"); return VOIDnum;}         
{IFnum}                   {printf_result("IFnum"); return IFnum;}
{ELSEnum}                 {printf_result("ELSEnum"); return ELSEnum;}
{CLASSnum}                {printf_result("CLASSnum"); return CLASSnum;} 
{WHILEnum}                {printf_result("WHILEnum"); return WHILEnum;} 
{VALnum}                  {printf_result("VALnum"); return VALnum;}
{METHODnum}               {printf_result("METHODnum"); return METHODnum;}
{RETURNnum}	              {printf_result("RETURNnum"); return RETURNnum;}
{INTnum}                  {printf_result("INTnum"); return INTnum;}
{PROGRAMnum}              {printf_result("PROGRAMnum"); return PROGRAMnum;}
{ANDnum}                  {printf_result("ANDnum"); return ANDnum;}
{ASSGNnum}                {printf_result("ASSGNnum"); return ASSGNnum;}
{DECLARATIONnum}          {printf_result("DECLARATIONnum"); return DECLARATIONnum;}
{DOTnum}                  {printf_result("DOTnum"); return DOTnum;}
{ENDDECLARATIONSnum}      {printf_result("ENDDECLARATIONSnum"); return ENDDECLARATIONSnum;}
{EQUALnum}                {printf_result("EQUALnum"); return EQUALnum;}
{GTnum}                   {printf_result("GTnum"); return GTnum;}
{IDnum}                   {printf_result("IDnum"); return IDnum;}
{BADID}                   {ErrorHandler("BADID");}
{LBRACnum}                {printf_result("LBRACnum"); return LBRACnum;}
{LPARENnum}               {printf_result("LPARENnum"); return LPARENnum;}
{NEnum}                   {printf_result("NEnum"); return NEnum;}
{ORnum}                   {printf_result("ORnum"); return ORnum;}
{RBRACnum}                {printf_result("RBRACnum"); return RBRACnum;}
{RPARENnum}               {printf_result("RPARENnum"); return RPARENnum;}  
{SEMInum}                 {printf_result("SEMInum"); return SEMInum;}
{COMMAnum}                {printf_result("COMMAnum"); return COMMAnum;} 
{DIVIDEnum}               {printf_result("DIVIDEnum"); return DIVIDEnum;}
{EQnum}                   {printf_result("EQnum"); return EQnum;}
{GEnum}                   {printf_result("GEnum"); return GEnum;}
{ICONSTnum}               {printf_result("ICONSTnum"); return ICONSTnum;}  
{LBRACEnum}               {printf_result("LBRACEnum"); return LBRACEnum;}  
{LEnum}                   {printf_result("LEnum"); return LEnum;}
{LTnum}                   {printf_result("LTnum"); return LTnum;}
{MINUSnum}                {printf_result("MINUSnum"); return MINUSnum;} 
{NOTnum}                  {printf_result("NOTnum"); return NOTnum;}
{PLUSnum}                 {printf_result("PLUSnum"); return PLUSnum;}
{RBRACEnum}               {printf_result("RBRACEnum"); return RBRACEnum;} 
{SCONSTnum}               {printf_result("SCONSTnum"); return SCONSTnum;}
{BADSCONST}               {ErrorHandler("BADSCONST");}
{TIMESnum}                {printf_result("TIMESnum"); return TIMESnum;} 
{COMMENT}                 {ProcessComment();}
{BADCOMMENT}              {ProcessComment(); ErrorHandler("BADCOMMENT");}
{Whitespace}        	  {yyline ++; yycolumn = 1;}  
{Whitespace2}             {yycolumn += yyleng;}
{ElseError}               {ErrorHandler("ElseError");}
<<EOF>>                   {printf_result("EOFnum"); return EOFnum;}
%%
/*
int main(int avgs, char *avgr[]) 
{
    yyin = fopen(avgr[1], "r");
    int returnval;
    if (!yyin)
    {
        return 0;
    }
   
    printf("%-10s%-10s%-20s%-10s\n", "yyline", "yycolumn", "KeyWord", "TbIndex");
    
    while (returnval = yylex())
    {
      
        printf_result(toString(returnval));
    }
    printf_result(toString(returnval));
    printf("\n");
    printf("String Table:\n");
    for (int i = 0; i < SymbolNum; i++)
    {
        
        printf("%s ", SymbolChart[i]);
    
    }

    printf("\n");
    
    for (int i = 0; i < 20; i++)
    {
    	printf("%d ", SymbolPositionNext[i]);
    }
    
    fclose(yyin);

    return 1;
}
*/

int yywrap (void)
{
    return 1;
}

