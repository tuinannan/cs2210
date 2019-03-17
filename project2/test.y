%{

  #include <stdlib.h>
  #include "stdio.h"
  #include "proj2.h"
  extern ILTree dummy;
  tree type_g = &dummy;
  int flag = 0;
  #define YYFRBUG 1
  yydebug = 1;
/*  typedef union 
  {
   int intg;
   tree tptr;
  } YYSTYPE;
  */

  %}

  %token <intg> ANDnum CLASSnum ASSGNnum COMMAnum DECLARATIONnum DIVIDEnum DOTnum ELSEnum 
                ENDDECLARATIONSnum EQnum EQUALnum GEnum GTnum ICONSTnum IDnum IFnum INTnum 
                LBRACEnum LBRACnum LEnum LPARENnum LTnum METHODnum MINUSnum NEnum NOTnum ORnum 
                PLUSnum PROGRAMnum RBRACEnum RBRACnum RETURNnum RPARENnum SCONSTnum SEMInum 
                TIMESnum VALnum VOIDnum WHILEnum EOFnum 
  %type <tptr> 
 Program ClassDecl_m ClassDecl ClassBody Decls FieldDecl_m FieldDecl Field_1
 Field_1_c  VariableDeclId 
         VariableInitializer ArrayInitializer VariableInitializer_c ArrayCreationExpression 
         Array_c MethodDecl_m MethodDecl FormalParameterList_m FormalParameterList Formal_c_m Formal_c
         Formal_h IDnum_m 
         Block Type Type_c Type_cc StatementList Statement_m Statement AssignmentStatement 
         MethodCallStatement Expression_m ReturnStatement IfStatement If_c If_cc WhileStatement 
         Expression Sim_c SimpleExpression AOrMT Term Factor UnsignedConstant Variable 
         ID_c_m ID_c Expres_c

  %%

  Program : PROGRAMnum IDnum SEMInum ClassDecl_m  { $$ =            
            MakeTree(ProgramOp, $4, MakeLeaf(IDNode, $2)); printtree($$, 0);}
          ;
  
  ClassDecl_m : ClassDecl  { $$ = MakeTree(ClassOp, NullExp(), $1); } 
              |  ClassDecl_m ClassDecl  { $$ = MakeTree(ClassOp, $1, $2); }
              ;

  ClassDecl : CLASSnum IDnum ClassBody  { $$ = MakeTree(ClassDefOp, $3,
              MakeLeaf(IDNode, $2)); } 
            ;

  ClassBody : LBRACEnum Decls MethodDecl_m RBRACEnum  { $$ = MkLeftC($2, $3); }
            | LBRACEnum RBRACEnum  { $$ = NullExp(); }
            | LBRACEnum MethodDecl_m RBRACEnum { $$ = $2;}
            | LBRACEnum Decls RBRACEnum {$$ = $2;}
            ;
  
  Decls : DECLARATIONnum FieldDecl_m ENDDECLARATIONSnum { $$ = $2; }
        | DECLARATIONnum ENDDECLARATIONSnum { $$ = MakeTree( BodyOp, 
          NullExp(), NullExp()); }
        ;

  FieldDecl_m : FieldDecl_m FieldDecl { $$ = MakeTree( BodyOp, $1, $2); }
              | FieldDecl { $$ = MakeTree(BodyOp, NullExp(), $1); }
              ;

  FieldDecl : Type {type_g = $1;} Field_1 SEMInum { $$ = $3; }
            ;
  Field_1 : Field_1_c { $$ = MakeTree(DeclOp, NullExp(), $1); }
          | Field_1 COMMAnum Field_1_c { $$ = MakeTree(DeclOp, $1, $3); }
          ;

  Field_1_c : VariableDeclId { $$ = MakeTree(CommaOp, $1, MakeTree(CommaOp,
              type_g, NullExp())); }
            | VariableDeclId EQUALnum VariableInitializer { $$ =
              MakeTree(CommaOp, $1, MakeTree(CommaOp, type_g, $3)); }
            ;  

  VariableDeclId : IDnum BRACKET_m  { $$ = MakeLeaf(IDNode, $1); }
                | IDnum  {  $$ = MakeLeaf(IDNode, $1); }
                ;

  //what should be returned after matching this?????????????????
  BRACKET_m : BRACKET_m LBRACnum RBRACnum 
            | LBRACnum RBRACnum 
            ;

  // should this match return anything or not
  VariableInitializer : Expression
                      | ArrayInitializer
                      | ArrayCreationExpression { $$ = $1; }
                      ;

  ArrayInitializer : LBRACEnum VariableInitializer_c RBRACEnum { $$ = MakeTree(ArrayTypeOp,
                     $2, type_g);}
                   ;

  VariableInitializer_c : VariableInitializer { $$ = MakeTree(CommaOp,
                          NullExp(), $1);}
                        | VariableInitializer_c COMMAnum VariableInitializer {
                          $$ = MakeTree(CommaOp, $1, $3); }
                        ;
  
  ArrayCreationExpression : INTnum Array_c { $$ = MakeTree(ArrayTypeOp, $2,
                             MakeLeaf(INTEGERTNode, 0)); }
                           ;

  Array_c : Array_c LBRACnum Expression RBRACnum { $$ = MakeTree(BoundOp, $1,
            $3); }
          | LBRACnum Expression RBRACnum { $$ = MakeTree(BoundOp, NullExp(), $2); }
          ;
  
  MethodDecl_m : MethodDecl {$$ = MakeTree(BodyOp, NullExp(), $1); } 
               | MethodDecl_m MethodDecl { $$ = MakeTree(BodyOp, $1, $2); }
               ;

  MethodDecl : METHODnum Type  IDnum LPARENnum FormalParameterList_m
               RPARENnum Block { $$ = MakeTree(MethodOp, MakeTree(HeadOp,
               MakeLeaf(IDNode, $3), $5), $7); 
               //type_g = $2;
               }
             | METHODnum Type IDnum LPARENnum RPARENnum Block { $$ =
               MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, $3),
               MakeTree(SpecOp, NullExp(), type_g)), $6); 
               //type_g = $2;
               }
             | METHODnum VOIDnum IDnum LPARENnum FormalParameterList_m RPARENnum
               Block {  type_g = NullExp(); $$ = MakeTree(MethodOp, MakeTree(HeadOp, 
               MakeLeaf(IDNode, $3), $5), $7); 
               //type_g = NullExp();
               }
             | METHODnum VOIDnum IDnum LPARENnum RPARENnum Block {  type_g =
               NullExp(); $$ = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, $3),
               MakeTree(SpecOp, NullExp(), type_g)), $6); 
               //type_g = NullExp();
               }
             ;

 FormalParameterList_m : FormalParameterList { $$ = MakeTree(SpecOp, $1, type_g); }
                       ;

 FormalParameterList : Formal_c_m { $$ = $1; }
                     | FormalParameterList SEMInum Formal_c_m {$$ = MkRightC($3, $1); }
                     ;

 Formal_c_m : Formal_h IDnum IDnum_m  
              { 
              MkRightC($3, $1);
              $$ = MkLeftC(MakeTree(CommaOp, MakeLeaf(IDNode, $2), MakeLeaf(INTEGERTNode, 0)),   
              $1);
              //$$ = MakeTree(SpecOp, $1, type_g);
              }
          ;

 Formal_h : INTnum {flag = 1; $$ = MakeTree(RArgTypeOp, NullExp(), NullExp()); }
          | VALnum INTnum { flag = 0; $$ = MakeTree(VArgTypeOp, NullExp(),
            NullExp());}
          ;

 IDnum_m  : IDnum_m COMMAnum IDnum 
          { 
            if (flag == 1) { $$ = MakeTree(RArgTypeOp, MakeTree(CommaOp,
            MakeLeaf(IDNode, $3), MakeLeaf(INTEGERTNode, 0)), $1); }
            else { $$ = MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode,
            $3), MakeLeaf(INTEGERTNode, 0)), $1); }}
          | {$$ = NullExp();}
          ;
 
 Block : Decls StatementList { $$ = MakeTree(BodyOp, $1, $2); }
       | StatementList { $$ = MakeTree(BodyOp, NullExp(), $1); }
       ;
 
 Type : IDnum { type_g = MakeTree(TypeIdOp, MakeLeaf(IDNode, $1), NullExp()); 
         $$ = type_g;
        }
      | INTnum {type_g = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, $1), NullExp()); 
        $$ = type_g;
        } 
      | IDnum Type_c { type_g = MakeTree(TypeIdOp, MakeLeaf(IDNode, $1), $2); 
        $$ = type_g;
        }
      | INTnum Type_c { type_g = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, $1), $2); 
        $$ = type_g;
        }
        ;

 Type_c : LBRACnum RBRACnum Type_cc { $$ = $3; }
        | LBRACnum RBRACnum Type_cc DOTnum Type { $$ =
        MkRightC(MakeTree(IndexOp, NullExp(), MakeTree(FieldOp, $5, NullExp())),
        $3); }
        ;

 Type_cc : LBRACnum RBRACnum Type_cc { $$ = MakeTree(IndexOp, NullExp(), $3); }
         | { $$ = MakeTree(IndexOp, NullExp(), NullExp()); }
         ;

 StatementList : LBRACEnum Statement_m RBRACEnum { $$ = $2; }
               ;
 
 Statement_m : Statement { $$ = MakeTree(StmtOp, NullExp(), $1); }
             | Statement_m SEMInum Statement 
                { 
                  if($3 == NullExp()) {$$ = $1;}
                  else{$$ = MakeTree(StmtOp, $1, $3);} }
             ;

 Statement : AssignmentStatement
           | MethodCallStatement
           | ReturnStatement
           | IfStatement
           | WhileStatement
           | 
             { $$ = NullExp();}
           ;
 
 AssignmentStatement : Variable ASSGNnum Expression { $$ = MakeTree(AssignOp,
                       MakeTree(AssignOp, NullExp(), $1), $3); }
                     ;

 MethodCallStatement : Variable LPARENnum RPARENnum { $$ =
                       MakeTree(RoutineCallOp, $1, NullExp()); }
                     | Variable LPARENnum Expression_m RPARENnum { $$ =
                       MakeTree(RoutineCallOp, $1, $3); }
                     ;
 
 Expression_m : Expression { $$ = MakeTree(CommaOp, $1, NullExp()); } 
              | Expression COMMAnum Expression_m { $$ = MakeTree(CommaOp, $1,
                $3);}
              ;
 
 //no return in lexer????
 ReturnStatement : RETURNnum Expression { $$ = MakeTree(ReturnOp, $2,
                   NullExp()); }
                 | RETURNnum { $$ = MakeTree(ReturnOp, NullExp(), NullExp()); }
                 ;

 IfStatement : If_c { $$ = $1; }
             | IfStatement ELSEnum If_c { $$ = MkLeftC($1, $3); }
             | IfStatement ELSEnum StatementList { $$ = MakeTree(IfElseOp, $1,
               $3); }

 If_c : IFnum Expression StatementList { $$ = MakeTree(IfElseOp, NullExp(),
        MakeTree(CommaOp, $2, $3)); }
      ;

 WhileStatement : WHILEnum Expression StatementList { $$ = MakeTree(LoopOp, $2,
                  $3); }
                ;
 
 Expression : SimpleExpression { $$ = $1; }
            | SimpleExpression Sim_c SimpleExpression { MkLeftC($1, $2); $$
              = MkRightC($3, $2);}
            ;

 Sim_c : LEnum 
         {$$=MakeTree(LEOp, NullExp(), NullExp()); }
       | LTnum
         {$$=MakeTree(LTOp, NullExp(), NullExp()); }
       | EQnum 
         {$$=MakeTree(EQOp, NullExp(), NullExp()); }
       | NEnum
         {$$=MakeTree(NEOp, NullExp(), NullExp()); }
       | GEnum
         {$$=MakeTree(GEOp, NullExp(), NullExp()); }
       | GTnum
         {$$=MakeTree(GTOp, NullExp(), NullExp()); }
       ;
 
 SimpleExpression : Term { $$ = $1; }
                  | AOrMT { $$ = $1; }
                  | SimpleExpression PLUSnum Term { $$ = MakeTree(AddOp, $1,
                    $3); }
                  | SimpleExpression MINUSnum Term { $$ = MakeTree(SubOp, $1,
                    $3); }
                  | SimpleExpression ORnum Term { $$ = MakeTree(OrOp, $1,
                    $3); }
                  ;

 AOrMT : PLUSnum Term { $$ = $2; }
       | MINUSnum Term { $$ = MakeTree(UnaryNegOp, $2, NullExp()); }
       ;
          
 Term : Factor { $$ = $1; }
      | Term TIMESnum Factor { $$ = MakeTree(MultOp, $1, $3); }
      | Term DIVIDEnum Factor { $$ = MakeTree(DivOp, $1, $3); }
      | Term ANDnum Factor { $$ = MakeTree(AndOp, $1, $3); }
      ;
 
 Factor : UnsignedConstant { $$ = $1; }
        | Variable { $$ = $1; }
        | MethodCallStatement { $$ = $1; }
        | LPARENnum Expression RPARENnum { $$ = $2; }
        | NOTnum Factor { $$ = MakeTree(NotOp, $2, NullExp()); }
        ;
 
 UnsignedConstant : ICONSTnum { $$ = MakeLeaf(NUMNode, $1); }
                  | SCONSTnum { $$ = MakeLeaf(STRINGNode, $1); }
                  ;
 
 Variable : IDnum { $$ = MakeTree(VarOp, MakeLeaf(IDNode, $1), NullExp()); }  
          | IDnum ID_c_m { $$ = MakeTree(VarOp, MakeLeaf(IDNode, $1), $2); }
          ;
 
 ID_c_m : ID_c { $$ = MakeTree(SelectOp, $1, NullExp()); } 
        | ID_c ID_c_m { $$ = MakeTree(SelectOp, $1, $2); }
        ;
 
 ID_c : LBRACnum Expres_c RBRACnum { $$ = $2; }
      | DOTnum IDnum { $$ = MakeTree(FieldOp, MakeLeaf(IDNode, $2), NullExp()); }
      ;

 Expres_c : Expression { $$ = MakeTree(IndexOp, $1, NullExp()); } 
          | Expression COMMAnum Expres_c { $$ = MakeTree(IndexOp, $1, $3); }
          ;

  %%
 int yyline, yycolumn;
 extern FILE *treelst;
 int main(void) {
   treelst=stdout;
   yyparse();
  }

 void yyerror(char *s) {
   printf("yyerror: %s at line %d column %d \n", s, yyline, yycolumn);
 }

