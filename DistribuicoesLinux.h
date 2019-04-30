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

public:
    DistribuicoesLinux();
    ~DistribuicoesLinux();
    DistribuicoesLinux(string distribuicoes[], string &data_Lancamento_Distribuicao);
    string info_Tabela_De_Distribuicoes();

private:
    const static int SIZEDISTRIBUICOES=5;
    static string distribuicoes[SIZEDISTRIBUICOES];
    string data_Lancamento_Distribuicao;

};

#endif // DISTRIBUICOESLINUX_H
