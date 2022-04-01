grammar ifcc;

axiom : prog* ;

prog : INT VAR OPENPAR CLOSEPAR OPENBRACKET instr*  CLOSEBRACKET
    |  INT VAR OPENPAR INT VAR (COMMA INT VAR)* CLOSEPAR OPENBRACKET instr*  CLOSEBRACKET;
instr : declaration #declarationInstr | functionCall #functionCallInstr | affectation #affectationInstr | return_stmt #return_stmtInstr ; 
declaration: INT variables* VAR SEMICOLON; 
functionCall: VAR OPENPAR (expression COMMA)* expression CLOSEPAR SEMICOLON; 
variables: VAR COMMA;
affectation: VAR EQUAL expression SEMICOLON;
expression: OPENPAR expression CLOSEPAR #par
| (MINUS) expression #oppose
| expression (MULTIPLY | DIVIDE) expression #multdiv
| expression (PLUS | MINUS) expression #plusminus
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
EQUAL : '=';
PLUS : '+' ;
MINUS : '-' ;
MULTIPLY : '*' ;
DIVIDE : '/' ;
OPM: MULTIPLY | DIVIDE;
OPA: PLUS | MINUS;


RETURN : 'return' ;
CONST : [0-9]+ ;
VAR : [_a-zA-Z][_a-zA-Z0-9]*;
COMMA : ',';
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);


