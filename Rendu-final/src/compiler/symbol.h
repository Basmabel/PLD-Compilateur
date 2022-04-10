/*************************************************************************
                           symbol -  description
                             -------------------
    début                : 11/03/2022
    copyright            : (C) 2022 par GUILLEVIC Marie, BELAHCEN Basma, ALAMI Meryem, PREVOT Jade, CHELLAOUI Adam, M BARECK Aichetou, 
							AL ZAHABI Hanaa, WAQIF Salma, GREVAUD Paul
*************************************************************************/


#if ! defined ( SYMBOL_H )
#define SYMBOL_H

//--------------------------------------------------- Interfaces utilisées
#include <string>

using namespace std;

/* Rôle de la classe <symbol>
*  Représente un symbole avec un nom, une position dans la pile (offset par rapport à rbp), un type, sa ligne de déclaration et 
*  s'il est utilisé ou non
*/
typedef enum {
		INT,
		CHAR,
		VOID,
		ADD,
		SUB,
		MUL,
		NEG,
		SETZ,
		DIV,
		AND,
		OR,
		XOR,
		CONST,
		MOV,
		CALL,
		WMEM,
		RMEM,
		RET,
		CMP_EQ,
		CMP_INEQ,
		CMP_LT,
		CMP_GT,
		DEFAULT
} Type;

class  symbol{
        
        public:
		
                symbol(string name, int offset, Type type, int line);

                string getName();
                int getOffset();
                Type getType();
                int getLine();
                bool isUsed();
                bool isNull();

                void setUsed(bool used);
                void setNull(bool null);
                void setType(Type type);

	private:

        //------------------------------------------------------------------ Attributes

                string name;
                int offset;
                Type type;
                int line;
                bool used;
                bool null;

};
#endif //SYMBOL_H