#ifndef DISTRIBUICOESLINUX_H
#define DISTRIBUICOESLINUX_H
#include<iostream>
#include<string.h>
using namespace std;
using std::string;
using std::getline;
using std::cout;
using std::endl;


class DistribuicoesLinux
{

public:
    DistribuicoesLinux();
    ~DistribuicoesLinux();
    
    DistribuicoesLinux(string &distribuicoes[SIZEDISTRIBUICOES], int data_Lancamento_Distribuicao[SIZEDISTRIBUICOES] );
    
    DistribuicoesLinux(const DistribuicoesLinux &p);
    
    //----------------------------------FIM CONSTRUTORES----------------------------------------  
    string info_Tabela_De_Distribuicoes()const;
    
private:
    const static int SIZEDISTRIBUICOES=4;
    static string distribuicoes[SIZEDISTRIBUICOES];
    static int data_Lancamento_Distribuicao[SIZEDISTRIBUICOES];

};

#endif // DISTRIBUICOESLINUX_H
