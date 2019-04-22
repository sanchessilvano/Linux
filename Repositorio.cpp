#include "Repositorio.h"
#include <string>
#include <iostream>
using std::string;

Repositorio::Repositorio()
{
    string repositorio[SIZEREPOSITORIO]={"LibreOffice","VLC","Gimp"}; 
}

Repositorio::Repositorio(string repositorio[SIZEREPOSITORIO])
{
}

    string Repositorio::repositorio[SIZEREPOSITORIO]={"LibreOffice","VLC","Gimp"}; 
    
    string Repositorio::info_respositorio()
    {
        for(int i=0;i<SIZEREPOSITORIO;i++)
            {
                std::cout<<"Programas Linux: "<<repositorio[i]<<"\n";
            }
    }

Repositorio::~Repositorio()
{
}
