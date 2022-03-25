#pragma once
/*************************************************************************
                           Symbol  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

#if ! defined ( SYMBOL_H )
#define SYMBOL_H

//--------------------------------------------------- Interfaces utilisées
#include <string>

using namespace std;

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types



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