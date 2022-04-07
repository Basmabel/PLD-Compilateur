grammar ifcc;

axiom : prog* ;


prog : typeFunction VAR OPENPAR CLOSEPAR OPENBRACKET instr*  CLOSEBRACKET
    |  typeFunction VAR OPENPAR type VAR (COMMA type VAR)* CLOSEPAR OPENBRACKET instr*  CLOSEBRACKET;
    
instr : declaration #declarationInstr | functionCall #functionCallInstr | if_then_else #if_then_elseInstr | whileloop #whileloopInstr| affectation SEMICOLON #affectationInstr | return_stmt #return_stmtInstr ; 

declaration: type variables* enddeclaration SEMICOLON; 
type: INT #int | CHAR #char;
typeFunction : type #typeFunc | VOID #void;

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
| expression (GREATER | SMALLER) expression #inequality
| expression (ISEQUAL | ISDIFFERENT) expression #equality
| VAR OPENSQBRACKETS expression CLOSESQBRACKETS #valTableau
| affectation #exprAffectation
| VAR #var
| CHARACTER #character
| CONST #const;

if_then_else : IF OPENPAR expression CLOSEPAR OPENBRACKET blockthen=block CLOSEBRACKET ELSE OPENBRACKET blockelse=block CLOSEBRACKET ;

whileloop : WHILE OPENPAR blockConditionWhile CLOSEPAR OPENBRACKET blockwhile=block CLOSEBRACKET ;

block: instr*;

blockConditionWhile: expression ; 

return_stmt : RETURN expression SEMICOLON;


INT : 'int' ;
CHAR : 'char' ;
VOID : 'void';
OPENPAR : '(' ;
CLOSEPAR : ')' ;
SEMICOLON : ';' ;
OPENBRACKET : '{' ;
CLOSEBRACKET : '}' ;
OPENSQBRACKETS: '[';
CLOSESQBRACKETS: ']';
ISEQUAL : '==' ;
ISDIFFERENT : '!=' ; 
EQUAL : '=';
GREATER : '>' ;
SMALLER : '<' ;
PLUS : '+' ;
MINUS : '-' ;
MULTIPLY : '*' ;
DIVIDE : '/' ;
IF : 'if' ;
ELSE : 'else' ;
WHILE : 'while';
OPM: MULTIPLY | DIVIDE;
OPA: PLUS | MINUS;
EXCLA: '!';
AND: '&';
OR: '|';
XOR: '^';



RETURN : 'return' ;
CONST : [0-9]+ ;
VAR : [_a-zA-Z][_a-zA-Z0-9]*;
CHARACTER : '\''.?'\'';
COMMA : ',';
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);
