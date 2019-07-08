#include "Linux.h"
#include <string.h>
#include <iostream>
#include<stdlib.h>
using std::string;


Linux::Linux( char* novoNomeDoSistema,int novaAquiteturaDoSistema,int novoComandoDoAdministrador,double novaBuild,bool novoLligado,const string &novoNomePrograma,const string &KernelLinux)
: SistemaOperacional( novoNomeDoSistema,novaAquiteturaDoSistema,novoComandoDoAdministrador,novaBuild,novoLligado,novoNomePrograma )
{
    this->KernelLinux=KernelLinux;
}

Linux::Linux(const Linux &copia)
: SistemaOperacional( copia ) 
{
    
    this->KernelLinux=copia.KernelLinux;
}


void Linux::abrirPrograma ()
{
    cout<<programa<<" Versao Linux aberto!"<<endl;
}

void Linux::abrirArquivo ()
{
    cout<<"Arquivo do Gimp aberto!"<<endl;
}


void Linux::infoSistema()
{
    cout<<"Nome do sistema...........:"<<nomeDoSistema<<endl;
    cout<<"Arquitetura do sistema.....:"<<aquiteturaDoSistema<<" Bits"<<endl;
    cout<<"Build:.....................:"<<build<<endl;
    cout<<"Programa:.....................:"<<programa<<endl;
    cout<<"........................."<<"\n";
    cout<<"\n"<<endl;
}



void Linux::modificaPrograma(double alterarPrograma)
{
   if(alterarPrograma==true){
       cout<<KernelLinux<<" alterado"<<"\n";
   }else if(alterarPrograma!=true){
       cout<<"Nenhuma alteracao no Kernel"<<endl;
       
    }
}


void Linux::exibeCodigoFonte(double visualizaCodigoFonte)
{
   if(visualizaCodigoFonte==true){
       cout<<" Exibindo "<<codigoFonte<<"\n";
   }else if(visualizaCodigoFonte!=true){
       cout<<"O codigo fonte nao pode ser exibido"<<endl;
       
    }
}



//sobrecarga de operadores
ostream &operator<<( ostream &output, const Linux &copia) 
{
    output<<"Nome do sistema Operacional: "<<copia.nomeDoSistema<<" Build: "<<copia.build<<" Arquitetura: "<<copia.aquiteturaDoSistema<<" Bits"<<endl;
    return output;
}


const Linux &Linux::Linux::operator= (const Linux &right)
{
    if (&right!=this)
    {
        destruir();
        
        inicializar(right.nomeDoSistema,right.aquiteturaDoSistema,right.comandoDoAdministrador,right.build,right.ligado,right.programa);
    }
    return *this;
}


bool Linux::operator==(const Linux &right)const
{
    if(nomeDoSistema!=right.nomeDoSistema){
        return false;
    }else{
        return true;
    }
        
}

bool Linux::operator!=(const Linux &right)const
 {
    return! (*this==right);
 }




Linux::~Linux()
{
    destruir();
}

