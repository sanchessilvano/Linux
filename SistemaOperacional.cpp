#include "SistemaOperacional.h"
#include <string.h>
#include <iostream>
#include<stdlib.h>
using std::string;

SistemaOperacional::SistemaOperacional( char* novoNomeDoSistema,int novaAquiteturaDoSistema,int novoComandoDoAdministrador,double novaBuild,bool novoLligado,
const string &novoNomePrograma): nomeDoSistema(novoNomeDoSistema), aquiteturaDoSistema(novaAquiteturaDoSistema), comandoDoAdministrador(novoComandoDoAdministrador),
build(novaBuild),ligado(novoLligado),programa(novoNomePrograma)
{
    inicializar(novoNomeDoSistema,novaAquiteturaDoSistema,novoComandoDoAdministrador,novaBuild,novoLligado,novoNomePrograma);
    
}

SistemaOperacional::SistemaOperacional(const SistemaOperacional &copia):programa(copia.programa)
{
    inicializar(copia.nomeDoSistema,copia.aquiteturaDoSistema,copia.comandoDoAdministrador,copia.build,copia.ligado,copia.programa);
}

//FUNÇÃO 1
void SistemaOperacional::setEstado_Do_Sistema(int boot)
{
    if(boot==1){
        this->ligado=true;
    }else if(boot==0){
        this->ligado=false;
    }
}



void SistemaOperacional::getEstado_Do_Sistema()const
{
    if(ligado==1){
        cout<<"\nSistema Operaccionnal Inicializado\n"<<endl;
        
    }else if(ligado==0){
        cout<<"\nSistema Operaccionnal nao Inicializado, falha no boot\n"<<endl;
        exit(0);
        //return 0;
    }
}
//FIM FUNÇÃO 1


//FUNÇÃO 2

void SistemaOperacional::setEscolhaAdministrador(int comandoDoAdministrador)
{
    if(comandoDoAdministrador==1){
        this->comandoDoAdministrador=true;
    }else if(comandoDoAdministrador!=1){
        this->comandoDoAdministrador=false;
    }
}
 
   
void SistemaOperacional::getEscolhaAdministrador()const
{
     if(comandoDoAdministrador==1){
        cout<<"\nMostrando dados:\n";
        cout<<"\n";
        
    }else if (comandoDoAdministrador!=1){
        cout<<"\nEncerrando sessao\n";
      exit(0);
    }
}

//FIMM FUNÇÃO 2

void SistemaOperacional::inicializar(const char* novoNomeDoSistema,int novaAquiteturaDoSistema,int novoComandoDoAdministrador,double novaBuild,bool novoLligado,Programa novoPrograma)
{
    int tam = strlen(novoNomeDoSistema) + 1;
    nomeDoSistema = new char[tam];
    strcpy(nomeDoSistema,novoNomeDoSistema);
    aquiteturaDoSistema=novaAquiteturaDoSistema;
    comandoDoAdministrador=novoComandoDoAdministrador;
    build=novaBuild;
    ligado=novoLligado;
    programa = novoPrograma;
}

void SistemaOperacional::destruir()
{
    delete [] nomeDoSistema;
    aquiteturaDoSistema=0;
    comandoDoAdministrador=0;
    build=0;    
    ligado=0;
    nomeDoSistema=0;
}

void SistemaOperacional::setAquiteturaDoSistema(int aquiteturaDoSistema)
{
    //if(aquiteturaDoSistema==64)
        this->aquiteturaDoSistema=aquiteturaDoSistema;
}

int SistemaOperacional::getAquiteturaDoSistema()const
{
    if(aquiteturaDoSistema==64){
        return aquiteturaDoSistema;
    }else if (aquiteturaDoSistema==32){
        return aquiteturaDoSistema;
    }else if (aquiteturaDoSistema==86){
        return aquiteturaDoSistema;
    }else{
        return aquiteturaDoSistema==0;
    }
}


void SistemaOperacional::setNomeDoSistema(char* nomeDoSistema_)
{
    this->nomeDoSistema = nomeDoSistema_;
}

char SistemaOperacional::getNomeDoSistema()const
{
    return *nomeDoSistema;
}


void SistemaOperacional::setBuild(double build_)
{
    this->build=build_;
}


double SistemaOperacional::getBuild()const
{
    return build;
}
 


void SistemaOperacional::infoSistema()
{
    cout<<"Nome do sistema...........:"<<nomeDoSistema<<endl;
    cout<<"Arquitetura do sistema.....:"<<aquiteturaDoSistema<<" Bits"<<endl;
    cout<<"Build:.....................:"<<build<<endl;
    cout<<"Programa:.....................:"<<programa<<endl;
    cout<<"........................."<<"\n";
    cout<<"\n"<<endl;
}


void SistemaOperacional::mudarNome(char novoNome)
{
    nomeDoSistema[0]=novoNome;
}


//sobrecarga de operadores
ostream &operator<<( ostream &output, const SistemaOperacional &numero) 
{
    output<<"Nome do sistema Operacional: "<<numero.nomeDoSistema<<" Build: "<<numero.build<<" Arquitetura: "<<numero.aquiteturaDoSistema<<" Bits"<<endl;
    return output;
    
}


bool SistemaOperacional::operator==(const SistemaOperacional &right)const
{
    if(nomeDoSistema!=right.nomeDoSistema){
        return false;
    }else{
        return true;
    }
        
}

bool SistemaOperacional::operator!=(const SistemaOperacional &right)const
 {
    return! (*this==right);
 }
 
 
const SistemaOperacional &SistemaOperacional::operator=(const SistemaOperacional &right)
{
    if (&right!=this)
    {
        destruir();
        
        inicializar(right.nomeDoSistema,right.aquiteturaDoSistema,right.comandoDoAdministrador,right.build,right.ligado,right.programa);
    }
    return *this;
}

SistemaOperacional::~SistemaOperacional()
{
   destruir();
}

