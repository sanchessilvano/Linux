#include "Debian.h"
#include <string.h>
#include <iostream>
#include<stdlib.h>
using std::string;


Debian::Debian( char* novoNomeDoSistema,int novaAquiteturaDoSistema,int novoComandoDoAdministrador,double novaBuild,bool novoLligado,const string &novoNomePrograma,const string &KernelLinux, const string &arquiteturaAdicional)
:Linux(novoNomeDoSistema,novaAquiteturaDoSistema,novoComandoDoAdministrador,novaBuild,novoLligado,novoNomePrograma,KernelLinux)
{
     this->arquiteturaAdicional = arquiteturaAdicional;
}


Debian::Debian(Debian &copia)
:Linux( static_cast<Linux>(copia) )
{
    this->arquiteturaAdicional = copia.arquiteturaAdicional;
}



//sobrecarga de operadores
ostream &operator<<( ostream &output, const Debian &numero) 
{
    output<<static_cast<Linux>(numero)<<'\n';
    return output;
}


const Debian &Debian::Debian::operator= (const Debian &copia)
{
    if(this!=&copia)
    {
        *static_cast< Linux * >( this ) = static_cast< Linux >( copia );
        
        this->arquiteturaAdicional = copia.arquiteturaAdicional;
    }   
    return *this;
}



bool Debian::operator==(const Debian &right)const
{
    if(this!=&right)
        
        if(static_cast<Linux>(*this) != static_cast<Linux>(right)){       
            return false;
        }else{
            return true;
        }
        
}

bool Debian::operator!=(const Debian &right)const
 {
    return! (*this==right);
 }

Debian::~Debian()
{
}

