/*************************************************************************
                           symbol -  description
                             -------------------
    début                : 11/03/2022
    copyright            : (C) 2022 par GUILLEVIC Marie, BELAHCEN Basma, ALAMI Meryem, PREVOT Jade, CHELLAOUI Adam, M BARECK Aichetou, 
							AL ZAHABI Hanaa, WAQIF Salma, GREVAUD Paul
*************************************************************************/
#pragma once

#if ! defined ( SYMBOL_H )
#define SYMBOL_H

//--------------------------------------------------- Interfaces utilisées
#include <string>
using namespace std;

/* Rôle de la classe <symbol>
*  Représente un symbole avec un nom, une position dans la pile (offset par rapport à rbp), un type, sa ligne de déclaration et 
*  s'il est utilisé ou non
*/


class  symbol{
        
        public:
		
                symbol(string name, size_t offset, string type, size_t line);

                string getName();
                size_t getOffset();
                string getType();
                size_t getLine();
                bool isUsed();
                
                void setUsed(bool used);

	private:

        //------------------------------------------------------------------ Attributes

                string name;
                size_t offset;
                string type;
                size_t line;
                bool used;

};
#endif //SYMBOL_H