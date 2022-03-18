grammar ifcc;

axiom : prog ;

prog : INT 'main' OPENPAR CLOSEPAR OPENBRACKET instr*  CLOSEBRACKET ;
instr : declaration #declarationInstr | affectation #affectationInstr | return_stmt #return_stmtInstr ; 
declaration: INT variables* VAR SEMICOLON; 
variables: VAR COMMA;
affectation: VAR EQUAL value SEMICOLON;
expression: expression PLUS expression #plus
| expression MINUS expression #minus
| expression MULTIPLY expression #mult 
| expression DIVIDE expression #divide
| OPENPAR expression CLOSEPAR #par
| VAR #var
| CONST #const;
return_stmt : RETURN value SEMICOLON;
value : CONST | expression;

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


RETURN : 'return' ;
CONST : [0-9]+ ;
VAR : [a-zA-Z]+;
COMMA : ',';
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);


