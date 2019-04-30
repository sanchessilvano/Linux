#include "DistribuicoesLinux.h"
#include <string>
#include <iostream>
using std::string;

DistribuicoesLinux::DistribuicoesLinux()
{
     string distribuicoes[SIZEDISTRIBUICOES]={"Linux","Ubuntu","Fedrora","Debian"};
}

DistribuicoesLinux::DistribuicoesLinux(string distribuicoes[SIZEDISTRIBUICOES], string &data_Lancamento_Distribuicao)
{
    
}
string DistribuicoesLinux::distribuicoes[SIZEDISTRIBUICOES]={"Linux","Ubuntu","Fedrora","Debian"};

string DistribuicoesLinux::info_Tabela_De_Distribuicoes()
{

    for(int i=0;i<SIZEDISTRIBUICOES;i++)
        {
            cout<<"distribuicoes Linux: "<<distribuicoes[i]<<"\n";
        
        }
}

DistribuicoesLinux::~DistribuicoesLinux()
{
}

