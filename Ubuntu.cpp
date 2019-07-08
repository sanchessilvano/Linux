#include "Ubuntu.h"
#include <string.h>
#include <iostream>
#include<stdlib.h>
using std::string;

int Ubuntu::numeroDeVeroes=14;
Ubuntu::Ubuntu( char* novoNomeDoSistema,int novaAquiteturaDoSistema,int novoComandoDoAdministrador,double novaBuild,bool novoLligado,const string &novoNomePrograma,const string &KernelLinux,const string &criptografiaAdiantum)
:Linux(novoNomeDoSistema,novaAquiteturaDoSistema,novoComandoDoAdministrador,novaBuild,novoLligado,novoNomePrograma,KernelLinux)
{
     this->criptografiaAdiantum = criptografiaAdiantum; 
     this->numeroDeVeroes = numeroDeVeroes;
     getMaximoMemoriaRam();
     getDataDeCriacaoDoSistema();
     //this->dataDeCriacaoDoSistema=dataDeCriacaoDoSistema;
     
}


Ubuntu::Ubuntu(Ubuntu &copia)
:Linux( static_cast<Linux>(copia) )
{
    this->criptografiaAdiantum = copia.criptografiaAdiantum;
    this->numeroDeVeroes=numeroDeVeroes;
     this->numeroDeVeroes= numeroDeVeroes;
}



//FUNÇÕES
int Ubuntu::getMaximoMemoriaRam()
{
    return maximoMemoriaRam;
}


int Ubuntu::getDataDeCriacaoDoSistema()
{
    return dataDeCriacaoDoSistema;
}

void Ubuntu::infoSistema()
{
    cout<<"Nome do sistema...........:"<<nomeDoSistema<<endl;
    cout<<"Arquitetura do sistema.....:"<<aquiteturaDoSistema<<" Bits"<<endl;
    cout<<"Build:.....................:"<<build<<endl;
    cout<<"Programa:...................:"<<programa<<endl;
    cout<<"Numero de versões: .........:"<<numeroDeVeroes<<"\n";
    cout<<"Maximo de moemoria ram......:"<<maximoMemoriaRam<<"\n";
    cout<<"Data De Criacao Do Sistema......:"<<dataDeCriacaoDoSistema<<"\n";
    cout<<"\n"<<endl;
}


void Ubuntu::exibeTipoDeCriptografia(){cout<<"O tipo de criptografia do Ubuntu e: "<<criptografiaAdiantum<<"\n";}


void Ubuntu::criAreaDeTrabalhoVirtual(){cout<<"Bem vindo a nova Area de Traballho!"<<numeroDaAreaDeTrabalho<<"\n";}




//sobrecarga de operadores
ostream &operator<<( ostream &output, const Ubuntu &numero) 
{
    output<<static_cast<Linux>(numero)<<'\n';
    return output;
}


const Ubuntu &Ubuntu::Ubuntu::operator= (const Ubuntu &copia)
{
    if(this!=&copia)
    {
        *static_cast< Linux * >( this ) = static_cast< Linux >( copia );
        
        this->criptografiaAdiantum = copia.criptografiaAdiantum;
    }   
    return *this;
}



bool Ubuntu::operator==(const Ubuntu &right)const
{
    if(this!=&right)
        
        if(static_cast<Linux>(*this) != static_cast<Linux>(right)){       
            return false;
        }else{
            return true;
        }
        
}

bool Ubuntu::operator!=(const Ubuntu &right)const
 {
    if(this!=&right)
        
        if(static_cast<Linux>(*this) != static_cast<Linux>(right)){       
            return true;
        }else{
            return false;
        }
 }
 
 
Ubuntu::~Ubuntu()
{
}

