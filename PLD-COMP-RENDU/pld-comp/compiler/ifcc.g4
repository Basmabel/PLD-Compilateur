grammar ifcc;

axiom : prog ;

prog : INT 'main' OPENPAR CLOSEPAR OPENBRACKET instr*  CLOSEBRACKET ;
instr : declaration #declarationInstr | affectation #affectationInstr | return_stmt #return_stmtInstr ; 
declaration: INT variables* VAR SEMICOLON; 
variables: VAR COMMA;
affectation: lvalue EQUAL expression SEMICOLON;
lvalue: VAR #lvalVar;
expression: OPENPAR expression CLOSEPAR #par
| MINUS expression #oppose
| EXCLA expression #negation
| expression (MULTIPLY | DIVIDE) expression #multdiv
| expression (PLUS | MINUS) expression #plusminus
| expression AND expression #andlogiq
| expression XOR expression #xorlogiq
| expression OR expression #orlogiq
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


