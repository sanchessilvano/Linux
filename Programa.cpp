#include "Programa.h"
#include <string.h>
#include <iostream>
#include<stdlib.h>
using std::string;


Programa::Programa(const string &nomePrograma)
{
    this->nomePrograma=nomePrograma;
   
}

    void Programa::setNomePrograma(const string &nomePrograma_)
    {
        this->nomePrograma=nomePrograma_;
    }
//sobrecarga de operadores
ostream &operator<<( ostream &output, const Programa &numero) 
{
    output<<numero.nomePrograma;
    return output;
    
}
    
   
    void Programa::infoPrograma()
    {
        cout<<"Nome do programa.............."<<nomePrograma<<endl;
        
    }

Programa::~Programa()
{
}

