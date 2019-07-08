#include "Mac.h"
#include <string.h>
#include <iostream>
#include<stdlib.h>
using std::string;

Mac::Mac( char* novoNomeDoSistema,int novaAquiteturaDoSistema,int novoComandoDoAdministrador,double novaBuild,bool novoLligado,const string &novoNomePrograma)
:SistemaOperacional(novoNomeDoSistema,novaAquiteturaDoSistema,novoComandoDoAdministrador,novaBuild,novoLligado,novoNomePrograma)
{
}
Mac::Mac(Mac &copia)
:SistemaOperacional( copia) 
{
}

//FUNCOES

void Mac::abrirPrograma (){cout<<programa<<" Navegador safari aberto!"<<endl;}

void Mac::abrirArquivo (){cout<<"Arquivo do iTunes aberto!"<<endl;}

void Mac::iniciaSessao(string usuario,string senha)
{
    if (usuario=="joao" && senha=="123"){
        cout<<"Funcao sessao automatica ativada\n";
    }else{
        cout<<"Faca login para isar todos os recursos do mac\n";
    }
}

void Mac::multitouch (){cout<<"usando mult touch"<<endl;};


void Mac::infoSistema()
{
    cout<<"Nome do sistema...........:"<<nomeDoSistema<<endl;
    cout<<"Arquitetura do sistema.....:"<<aquiteturaDoSistema<<" Bits"<<endl;
    cout<<"Build:.....................:"<<build<<endl;
    cout<<"Programa:.....................:"<<programa<<endl;
    cout<<"........................."<<"\n";
    cout<<"\n"<<endl;
}



//sobrecarga de operadores
ostream &operator<<( ostream &output, const Mac &copia) 
{
   output<<"Nome do sistema Operacional: "<<copia.nomeDoSistema<<" Build: "<<copia.build<<" Arquitetura: "<<copia.aquiteturaDoSistema<<" Bits"<<endl;
    return output;
}



const Mac &Mac::Mac::operator= (const Mac &right)
{
    if (&right!=this)
    {
        destruir();
        
        inicializar(right.nomeDoSistema,right.aquiteturaDoSistema,right.comandoDoAdministrador,right.build,right.ligado,right.programa);
    }
    return *this;
    
}


bool Mac::operator==(const Mac &right)const
{
    if(nomeDoSistema!=right.nomeDoSistema){
        return false;
    }else{
        return true;
    }
        
}

bool Mac::operator!=(const Mac &right)const
 {
    return! (*this==right);
 }



Mac::~Mac()
{
    destruir();
}

