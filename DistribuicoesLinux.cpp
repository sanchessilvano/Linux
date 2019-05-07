#include "DistribuicoesLinux.h"
#include <string.h>
#include <iostream>
using std::string;

DistribuicoesLinux::DistribuicoesLinux()
{
    //string distribuicoes[SIZEDISTRIBUICOES]={"Linux","Ubuntu","Fedrora","Debian"};
     
     //int data_Lancamento_Distribuicao[SIZEDISTRIBUICOES]={1992,1993,1994,1995};
}

DistribuicoesLinux::DistribuicoesLinux(string &distribuicoes[SIZEDISTRIBUICOES], int data_Lancamento_Distribuicao[SIZEDISTRIBUICOES])
{
    //*A IDEIA É INICIALIZAR OS VETORES POR AQUI, E O VET STRING POR REFERÊCENIA*/
     //string distribuicoes[SIZEDISTRIBUICOES]={"Linux","Ubuntu","Fedrora","Debian"};
     
     //int data_Lancamento_Distribuicao[SIZEDISTRIBUICOES]={1992,1993,1994,1995};
}
    
DistribuicoesLinux::DistribuicoesLinux(const DistribuicoesLinux &p)
{
    int j=0;
    this->distribuicoes[j]=p.distribuicoes[j];
}

//----------------------------------FIM CONSTRUTORES----------------------------------------  
string DistribuicoesLinux::distribuicoes[SIZEDISTRIBUICOES]={"Linux","Ubuntu","Fedrora","Debian"};

int DistribuicoesLinux::data_Lancamento_Distribuicao[SIZEDISTRIBUICOES]={1992,1993,1994,1995};

string DistribuicoesLinux::info_Tabela_De_Distribuicoes()const
{

    for(int j=0;j<SIZEDISTRIBUICOES;j++){
        
        
        
            cout<<"distribuicoes Linux: "<<distribuicoes[j]<<"\tAno de Lancamento"<<data_Lancamento_Distribuicao[j]<<"\n";
        
        }
}


DistribuicoesLinux::~DistribuicoesLinux()
{
}

