%{           
#include <stdio.h>  
#include <string.h>
#include "tokens.h"
#include "toString.h"
#define LIMIT1 500    
//extern char *yytext;
int yylval = 0;
int yyline = 1;
int yycolumn = 1;
int yylength = 0;
char a[] = " ";    
int SymbolNum = 0;
char *SymbolChart[LIMIT1];
int SymbolPositionNext[LIMIT1];
int SymbolLength[LIMIT1];
int AfterProcessLeng;
int flag;
int SearchIndex_Global;
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
 char* PreProcessString()
 {
    flag = 0;
    char *q = (char*)malloc(yyleng * sizeof(char));
    int mark [100] = {0};
    AfterProcessLeng = yyleng;
    for (int i = 0; i< yyleng; i++) q[i] = yytext[i];
   // if yyleng == 2 q = NULL; 
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

 char * PreProcessID() 
 {
     char *n = (char*)malloc(yyleng * sizeof(char));
     AfterProcessLeng = yyleng;
     for(int i = 0; i < yyleng; i++) n[i] = yytext[i];
     return n;
 }

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
        if (j == SymbolLength[i])
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

 void printf_result (char* KeyWord)
 {
    char *m; 
    int SearchResult;
    int TableIndex;
    yycolumn += yyleng;
    if (strcmp(KeyWord, "IDnum") == 0 || strcmp(KeyWord, "SCONSTnum") == 0)
    {
        if (strcmp(KeyWord, "SCONSTnum") == 0) 
        {    
            //printf("string = %s\n", yytext);
            m = PreProcessString();
        }
        else m =PreProcessID();
        SearchResult = SearchTable(m); 
        //printf("search result = %d\n", SearchResult);
        if (SearchResult == 0) TableIndex = TableInsert(m);
        else TableIndex = SearchIndex_Global;
        
        printf("%-10d%-10d%-20s%-10d%-20s\n", yyline, yycolumn, KeyWord, TableIndex, yytext);
    }
    else
    {

        printf("%-10d%-10d%-20s%-10s%-20s\n", yyline, yycolumn, KeyWord, a, yytext);
    }
    
   // yycolumn += yyleng;
 }

 void BadStringHandler()
 {
    printf("Error: Unmatched string constant, at line %d column %d\n", yyline, yycolumn);
    yyline ++;
    yycolumn = 1;
    
 }

 void BadIDHandler()
 {
    printf("Error: Malformed identifier '%s', at line %d column %d\n", yytext, yyline, yycolumn);
    yycolumn += yyleng;
 
 }

 void ElseErrorHandler()
 {
    printf("Undefined Symbol '%s', at line %d column %d\n", yytext, yyline, yycolumn);
 }

 void BadCommHandler()
 {
    printf("Error:  EOF found in comment at line %d column %d\n", yyline, yycolumn);
 }

void ErrorHandler(char *Keyword)
{
    if (strcmp(Keyword, "BADID") == 0) BadIDHandler();
    else if(strcmp(Keyword, "BADSCONST") == 0) BadStringHandler();
    else if (strcmp(Keyword, "BADCOMMENT") == 0) BadCommHandler();
    else ElseErrorHandler();


}
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
int sem_count = 0;

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

{VOIDnum}                 {return VOIDnum;}         
{IFnum}                   {return IFnum;}
{ELSEnum}                 {return ELSEnum;}
{CLASSnum}                {return CLASSnum;} 
{WHILEnum}                {return WHILEnum;} 
{VALnum}                  {return VALnum;}
{METHODnum}               {return METHODnum;}
{INTnum}                  {return INTnum;}
{PROGRAMnum}              {return PROGRAMnum;}
{ANDnum}                  {return ANDnum;}
{ASSGNnum}                {return ASSGNnum;}
{DECLARATIONnum}          {return DECLARATIONnum;}
{DOTnum}                  {return DOTnum;}
{ENDDECLARATIONSnum}      {return ENDDECLARATIONSnum;}
{EQUALnum}                {return EQUALnum;}
{GTnum}                   {return GTnum;}
{IDnum}                   {return IDnum;}
{BADID}                   {ErrorHandler("BADID");}
{LBRACnum}                {return LBRACnum;}
{LPARENnum}               {return LPARENnum;}
{NEnum}                   {return NEnum;}
{ORnum}                   {return ORnum;}
{RBRACnum}                {return RBRACnum;}
{RPARENnum}               {return RPARENnum;}  
{SEMInum}                 {return SEMInum;}
{COMMAnum}                {return COMMAnum;} 
{DIVIDEnum}               {return DIVIDEnum;}
{EQnum}                   {return EQnum;}
{GEnum}                   {return GEnum;}
{ICONSTnum}               {return ICONSTnum;}  
{LBRACEnum}               {return LBRACEnum;}  
{LEnum}                   {return LEnum;}
{LTnum}                   {return LTnum;}
{MINUSnum}                {return MINUSnum;} 
{NOTnum}                  {return NOTnum;}
{PLUSnum}                 {return PLUSnum;}
{RBRACEnum}               {return RBRACEnum;} 
{SCONSTnum}               {return SCONSTnum;}
{BADSCONST}               {ErrorHandler("BADSCONST");}
{TIMESnum}                {return TIMESnum;} 
{COMMENT}                 {ProcessComment();}
{BADCOMMENT}              {ProcessComment(); ErrorHandler("BADCOMMENT");}
{Whitespace}        	  {yyline ++; yycolumn = 1;}  
{Whitespace2}             {yycolumn += yyleng;}
{ElseError}               {ErrorHandler("ElseError");}
<<EOF>>                   {return EOFnum;}
%%

int main(int avgs, char *avgr[]) 
{
    yyin = fopen(avgr[1], "r");
    int returnval;
    if (!yyin)
    {
        return 0;
    }
   
    printf("%-10s%-10s%-20s%-10s%-20s\n", "yyline", "yycolumn", "KeyWord", "TbIndex", "yytext");
    
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
    
    fclose(yyin);

    return 1;
}

int yywrap (void)
{
    return 1;
}
