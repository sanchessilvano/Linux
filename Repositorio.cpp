#include "Repositorio.h"
#include <string>
#include <iostream>
using std::string;

Repositorio::Repositorio()
{
    nomesProgramas=0;
    sizenomesProgramas=0;
}

Repositorio::Repositorio(string repositorios_Linux[], int SIZEREPOSITORIO)
{
    nomesProgramas=0;
    sizenomesProgramas=0;
    setRepositoriosLinux(repositorios_Linux,SIZEREPOSITORIO);
}


Repositorio::Repositorio(const Repositorio &p)
: sizenomesProgramas( p.sizenomesProgramas)
{
    //this->sizenomesProgramas=p.sizenomesProgramas;
    
    nomesProgramas=new string[this->sizenomesProgramas];
    for(int i=0;i <this->sizenomesProgramas; i++)
        this->nomesProgramas[i]=p.nomesProgramas[i];
}


//----------------------------------FIM CONSTRUTORES----------------------------------------  
void Repositorio::setRepositoriosLinux(string repositorios_Linux[], int SIZEREPOSITORIO)
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

bool Repositorio::operator==( const Repositorio &right)const
{
    if( sizenomesProgramas != right.sizenomesProgramas)
        return false;
    for(int i=0; i< sizenomesProgramas; i++)
        if( nomesProgramas[i] != right.nomesProgramas[i])
            return false;
    return true;
}

const Repositorio &Repositorio::operator=(const Repositorio &right)
{
    if(&right != this)
    {
        //
        //
        if( sizenomesProgramas != right.sizenomesProgramas )
        {
            delete [] nomesProgramas;
            sizenomesProgramas = right.sizenomesProgramas;
            nomesProgramas = new string[sizenomesProgramas];
        }
    
        for(int i=0; i<sizenomesProgramas; i++)
            nomesProgramas[i] = right.nomesProgramas[i];
    }
     return *this;   
}

string &Repositorio::operator[] (int subscript)
{
    if(subscript< 0 || subscript>= sizenomesProgramas)
    {
        cerr<<"\nError: subscript " <<subscript
            <<"out of range"<<endl;
        exit(1);
    }
    return nomesProgramas[subscript];
}



string Repositorio::operator[] (int subscript)const
{
    if(subscript< 0 || subscript>= sizenomesProgramas)
    {
        cerr<<"\nError: subscript " <<subscript
            <<"out of range"<<endl;
        exit(1);
    }
    return nomesProgramas[subscript];
}



    void Repositorio::info_Respositorio()const
{
    cout<<"Programas Linux: \n";
    for(int i=0;i<sizenomesProgramas;i++)
        {
            cout<<nomesProgramas[i]<<"\n";
        }
}


ostream &operator<<( ostream &output, const Repositorio &p)
{
    cout<<"Saida vetor Programas do repositorio VIA SOBRECARGA DO OPERADOR <<"<<endl;
    for(int i=0;i<p.sizenomesProgramas;i++)
    output<<p.nomesProgramas[i]<<endl;
    
    return output;
}

Repositorio::~Repositorio()
{
}
