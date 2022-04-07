/*************************************************************************
                           function -  description
                             -------------------
    début                : 11/03/2022
    copyright            : (C) 2022 par GUILLEVIC Marie, BELAHCEN Basma, ALAMI Meryem, PREVOT Jade, CHELLAOUI Adam, M BARECK Aichetou, 
							AL ZAHABI Hanaa, WAQIF Salma, GREVAUD Paul
*************************************************************************/
#pragma once

#if ! defined ( FONCTION_H )
#define FONCTION_H

//--------------------------------------------------- Interfaces utilisées
#include <string>
#include <vector>
#include "symbol.h"
using namespace std;

/* Rôle de la classe <fonction>
*  A DEFINIR
*  
*/



class  fonction{
        
        public:
		
                fonction(string name, Type returnType, size_t line);

                string getNameFonction();
                Type getReturnType();
                size_t getLine();
                int getArgsSize();
                vector<pair<string,Type>> getArgs();
                void setArgs(vector<pair<string,Type>> arguments);


	private:

        //------------------------------------------------------------------ Attributes

                string name;
                Type type;
                size_t line;
                vector<pair<string,Type>> args;

};
#endif //FONCTION_H