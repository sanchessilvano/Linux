#include "Repositorio.h"
#include <string.h>
#include <iostream>
using std::string;

Repositorio::Repositorio()
{
    string repositorio[SIZEREPOSITORIO]={"LibreOffice","VLC","Gimp"}; 
}

Repositorio::Repositorio(string repositorio[SIZEREPOSITORIO])
{
}


Repositorio::Repositorio(const Repositorio &p)
{
    int i=0;
    this->repositorio[i]=p.repositorio[i];
}


//----------------------------------FIM CONSTRUTORES----------------------------------------  
string Repositorio::repositorio[SIZEREPOSITORIO]={"LibreOffice","VLC","Gimp"}; 
    
    string Repositorio::info_Respositorio()const
{
    for(int i=0;i<SIZEREPOSITORIO;i++)
        {
            cout<<"Programas Linux: "<<repositorio[i]<<"\n";
        }
}

Repositorio::~Repositorio()
{
}
