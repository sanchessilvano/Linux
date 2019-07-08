#include "Linux_Educacional.h"
#include <string.h>
#include <iostream>
#include<stdlib.h>
using std::string;

Linux_Educacional::Linux_Educacional( char* novoNomeDoSistema,int novaAquiteturaDoSistema,int novoComandoDoAdministrador,double novaBuild,bool novoLligado,const string &nomePrograma,const string &KernelLinux,int multiterminal)
:Linux(novoNomeDoSistema,novaAquiteturaDoSistema,novoComandoDoAdministrador,novaBuild,novoLligado,nomePrograma,KernelLinux)
{
     this->multiterminal = multiterminal;
}


Linux_Educacional::Linux_Educacional(Linux_Educacional &copia)
:Linux( static_cast<Linux>(copia) )
{
    this->multiterminal = copia.multiterminal;
}


//sobrecarga de operadores
ostream &operator<<( ostream &output, const Linux_Educacional &numero) 
{
    output<<static_cast<Linux>(numero)<<'\n';
    return output;
}


const Linux_Educacional &Linux_Educacional::Linux_Educacional::operator= (const Linux_Educacional &copia)
{
    if(this!=&copia)
    {
        *static_cast< Linux * >( this ) = static_cast< Linux >( copia );
        
        this->multiterminal = copia.multiterminal;
    }   
    return *this;
}



bool Linux_Educacional::operator==(const Linux_Educacional &right)const
{
    if(this!=&right)
        
        if(static_cast<Linux>(*this) != static_cast<Linux>(right)){       
            return false;
        }else{
            return true;
        }
        
}

bool Linux_Educacional::operator!=(const Linux_Educacional &right)const
 {
    return! (*this==right);
 }

Linux_Educacional::~Linux_Educacional()
{
}

