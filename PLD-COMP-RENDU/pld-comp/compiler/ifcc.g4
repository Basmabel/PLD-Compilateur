grammar ifcc;

axiom : prog ;

prog : INT 'main' OPENPAR CLOSEPAR OPENBRACKET instr*  CLOSEBRACKET ;
instr :     declaration                 #declarationInstr 
        |   affectation  SEMICOLON      #affectationInstr 
        |   return_stmt                 #return_stmtInstr 
        |   if_then_else                #if_then_elseInstr 
        |   whileloop                       #whileInstr         ; 
declaration: INT variables* VAR SEMICOLON; 
variables: VAR COMMA;
affectation: VAR EQUAL expression;
expression: OPENPAR expression CLOSEPAR #par
| (MINUS) expression #oppose
| affectation #exprAffecttion
| expression (MULTIPLY | DIVIDE) expression #multdiv
| expression (PLUS | MINUS) expression #plusminus
| expression (GREATER | SMALLER) expression #inequality
| expression (ISEQUAL | ISDIFFERENT) expression #equality
| VAR #var 
| CONST #const;

if_then_else : IF OPENPAR expression CLOSEPAR OPENBRACKET blockthen=block CLOSEBRACKET ELSE OPENBRACKET blockelse=block CLOSEBRACKET ;

whileloop : WHILE OPENPAR expression CLOSEPAR OPENBRACKET blockwhile=block CLOSEBRACKET ;

block: instr*;

condition :     affectation                     #condition_affectation
        |       expression                      #condition_expression
        |       comparison                      #condition_comparison ;   

comparison : expression ISEQUAL expression      #comparison_equal
        |    expression ISDIFFERENT expression  #comparison_different ;                         

return_stmt : RETURN expression SEMICOLON;


INT : 'int' ;
CHAR : 'char' ;
OPENPAR : '(' ;
CLOSEPAR : ')' ;
SEMICOLON : ';' ;
OPENBRACKET : '{' ;
CLOSEBRACKET : '}' ;
ISEQUAL : '==' ;
ISDIFFERENT : '!=' ; 
EQUAL : '=';
DIFFERENT : '!' ;
GREATER : '>' ;
SMALLER : '<' ;
PLUS : '+' ;
MINUS : '-' ;
MULTIPLY : '*' ;
DIVIDE : '/' ;
AND : '&' ;
OR : '|' ;
IF : 'if' ;
ELSE : 'else' ;
WHILE : 'while';
OPM: MULTIPLY | DIVIDE;
OPA: PLUS | MINUS;


RETURN : 'return' ;
CONST : [0-9]+ ;
VAR : [_a-zA-Z][_a-zA-Z0-9]*;
COMMA : ',';
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);
