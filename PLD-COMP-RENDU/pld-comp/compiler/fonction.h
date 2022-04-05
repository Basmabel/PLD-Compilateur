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
using namespace std;

/* Rôle de la classe <fonction>
*  A DEFINIR
*  
*/


class  fonction{
        
        public:
		
                fonction(string name, string returnType, vector<pair<string,string>> args, size_t line);

                string getNameFonction();
                string getReturnType();
                size_t getLine();
                int getArgsSize();
                vector<pair<string,string>> getArgs();


	private:

        //------------------------------------------------------------------ Attributes

                string name;
                string type;
                size_t line;
                vector<pair<string,string>> args;

};
#endif //FONCTION_H