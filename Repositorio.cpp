#include "Repositorio.h"
#include <string>
#include <iostream>
using std::string;

Repositorio::Repositorio()
{
    nomesProgramas=0;
    sizenomesProgramas=0;
}

Repositorio::Repositorio(const string repositorios_Linux[], int SIZEREPOSITORIO)
{
    nomesProgramas=0;
    sizenomesProgramas=0;
    setRepositoriosLinux(repositorios_Linux,SIZEREPOSITORIO);
}


Repositorio::Repositorio(const Repositorio &p)
{
    int i=0;
    this->nomesProgramas[i]=p.nomesProgramas[i];
}


//----------------------------------FIM CONSTRUTORES----------------------------------------  
void Repositorio::setRepositoriosLinux(const string repositorios_Linux[], int SIZEREPOSITORIO)
{
    if(nomesProgramas!=0)
    {
        delete [] nomesProgramas;
        nomesProgramas=0;
    }
    
    sizenomesProgramas= SIZEREPOSITORIO;
    nomesProgramas = new string[sizenomesProgramas];
    for(int i=0;i<sizenomesProgramas;i++)
        nomesProgramas[i]=repositorios_Linux[i];
}

    void Repositorio::info_Respositorio()const
{
    cout<<"Programas Linux: \n";
    for(int i=0;i<sizenomesProgramas;i++)
        {
            cout<<nomesProgramas[i]<<"\n";
        }
}

Repositorio::~Repositorio()
{
}
