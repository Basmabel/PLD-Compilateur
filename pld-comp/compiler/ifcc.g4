grammar ifcc;

axiom : prog ;

prog : INT 'main' OPENPAR CLOSEPAR OPENBRACKET instr*  CLOSEBRACKET ;
instr : declaration | affectation | return_stmt ; 
declaration: INT VAR SEMICOLON; 
affectation: VAR EQUAL value SEMICOLON;
return_stmt : RETURN value SEMICOLON;
value : CONST | VAR;

INT : 'int' ;
CHAR : 'char' ;
OPENPAR : '(' ;
CLOSEPAR : ')' ;
SEMICOLON : ';' ;
OPENBRACKET : '{' ;
CLOSEBRACKET : '}' ;
EQUAL : '=';


RETURN : 'return' ;
CONST : [0-9]+ ;
VAR : [a-zA-Z]+;
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);


