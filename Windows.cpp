#include "Windows.h"
#include <string.h>
#include <iostream>
#include<stdlib.h>
using std::string;

Windows::Windows( char* novoNomeDoSistema,int novaAquiteturaDoSistema,int novoComandoDoAdministrador,double novaBuild,bool novoLligado,const string &novoNomePrograma,const string &jogoAAA)
:SistemaOperacional(novoNomeDoSistema,novaAquiteturaDoSistema,novoComandoDoAdministrador,novaBuild,novoLligado,novoNomePrograma)
{
    this->jogoAAA=jogoAAA;
    
}

Windows::Windows(Windows &copia)
:SistemaOperacional( copia) 
{
    this->jogoAAA=copia.jogoAAA;
}
//FUNCOES

 void Windows::setJogo(string& jogoAAA_)
    {
        this->jogoAAA=jogoAAA_;
    }
 string Windows::getJogo()
 {
     return jogoAAA;
 }
 
 
 
void Windows::abrirPrograma ()
{
    cout<<programa<<" Versao Windows aberto!"<<endl;
}

void Windows::abrirArquivo (){
    cout<<"Arquivo do Word aberto!"<<endl;
}

void Windows::infoSistema()
{
    cout<<"Nome do sistema...........:"<<nomeDoSistema<<endl;
    cout<<"Arquitetura do sistema.....:"<<aquiteturaDoSistema<<" Bits"<<endl;
    cout<<"Build:.....................:"<<build<<endl;
    cout<<"Programa:.....................:"<<programa<<endl;
    cout<<"........................."<<"\n";
    cout<<"\n"<<endl;
}


void Windows::instalaJogo(int instalar)
{
    if(instalar==1){
        cout<<"Jogo "<<"CyberPunk 2077"<<endl;
    }else{
        cout<<"Jogo nao instalado\n";
    }
}

void Windows::xboxGamePass(){cout<<"Bem vindo a Xbox game pass"<<endl;}


//sobrecarga de operadores
ostream &operator<<( ostream &output, const Windows &copia) 
{
    output<<"Nome do sistema Operacional: "<<copia.nomeDoSistema<<" Build: "<<copia.build<<" Arquitetura: "<<copia.aquiteturaDoSistema<<" Bits"<<endl;
    
    //output<<copia.jogoAAA<<endl;
    return output;
}


const Windows &Windows::Windows::operator= (const Windows &right)
{
     if (&right!=this)
    {
        destruir();
        
        inicializar(right.nomeDoSistema,right.aquiteturaDoSistema,right.comandoDoAdministrador,right.build,right.ligado,right.programa);
    }
    return *this;
}



bool Windows::operator==(const Windows &right)const
{
    if(nomeDoSistema!=right.nomeDoSistema){
        return false;
    }else{
        return true;
    }
        
}

bool Windows::operator!=(const Windows &right)const
 {
    return! (*this==right);
 }


Windows::~Windows()
{
    destruir();
}

