grammar ifcc;

axiom : prog* ;


prog : INT VAR OPENPAR CLOSEPAR OPENBRACKET instr*  CLOSEBRACKET
    |  INT VAR OPENPAR INT VAR (COMMA INT VAR)* CLOSEPAR OPENBRACKET instr*  CLOSEBRACKET;
    
instr : declaration #declarationInstr | functionCall #functionCallInstr | affectation SEMICOLON #affectationInstr | return_stmt #return_stmtInstr ; 

declaration: INT variables* enddeclaration SEMICOLON; 

functionCall: VAR OPENPAR (expression COMMA)* expression CLOSEPAR SEMICOLON; 

variables: lvalue COMMA #varsimpledecl
| affectation COMMA #varaffectdecl;

enddeclaration: lvalue #enddeclvar
| affectation #enddeclaffect;

affectation: lvalue EQUAL expression;

lvalue: VAR #lvalVar
| VAR OPENSQBRACKETS expression CLOSESQBRACKETS #lvaltableau;

expression: OPENPAR expression CLOSEPAR #par
| MINUS expression #oppose
| EXCLA expression #negation
| expression (MULTIPLY | DIVIDE) expression #multdiv
| expression (PLUS | MINUS) expression #plusminus
| VAR OPENPAR (expression COMMA)* expression CLOSEPAR #funcCall
| expression AND expression #andlogiq
| expression XOR expression #xorlogiq
| expression OR expression #orlogiq
| VAR OPENSQBRACKETS expression CLOSESQBRACKETS #valTableau
| VAR #var
| CONST #const;

return_stmt : RETURN expression SEMICOLON;

INT : 'int' ;
CHAR : 'char' ;
OPENPAR : '(' ;
CLOSEPAR : ')' ;
SEMICOLON : ';' ;
OPENBRACKET : '{' ;
CLOSEBRACKET : '}' ;
OPENSQBRACKETS: '[';
CLOSESQBRACKETS: ']';
EQUAL : '=';
PLUS : '+' ;
MINUS : '-' ;
MULTIPLY : '*' ;
DIVIDE : '/' ;
OPM: MULTIPLY | DIVIDE;
OPA: PLUS | MINUS;
EXCLA: '!';
AND: '&';
OR: '|';
XOR: '^';



RETURN : 'return' ;
CONST : [0-9]+ ;
VAR : [_a-zA-Z][_a-zA-Z0-9]*;
COMMA : ',';
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);


