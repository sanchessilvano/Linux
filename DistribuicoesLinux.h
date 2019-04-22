#ifndef DISTRIBUICOESLINUX_H
#define DISTRIBUICOESLINUX_H
#include<iostream>
#include<string>
using namespace std;
using std::string;
using std::getline;
using std::cout;
using std::endl;


class DistribuicoesLinux
{
private:
    const static int SIZEDISTRIBUICOES=5;
    static string distribuicoes[SIZEDISTRIBUICOES];
    string data_Lancamento_Distribuicao;
    
    
    
public:
    DistribuicoesLinux();
    ~DistribuicoesLinux();
    DistribuicoesLinux(string distribuicoes[SIZEDISTRIBUICOES], string data_Lancamento_Distribuicao);
    string info_Tabela_De_Distribuicoes();


//abcs
};

#endif // DISTRIBUICOESLINUX_H
