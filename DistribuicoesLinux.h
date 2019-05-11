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
    
    DistribuicoesLinux(const string [], int );//TIRA NO CONST NA HORA DE FICAR DINAMICO
    
    DistribuicoesLinux(const DistribuicoesLinux &p);
    
    //----------------------------------FIM CONSTRUTORES----------------------------------------  
    void setDistribuicoesLinux(const string[],int);
    
    void exibeArrayDistribuicoes() const;
    
    //ALOCAÇÃO
    void adicionaDistribuicao(const string &novaDistribuicao);
    
    void exibe()const;
    
    void alocar(int);
    
    void desalocar( );
    
private:
    string *nomesDistribuicoesLinux;
    int sizenomesDistribuicoesLinux;
    string novaDistribuicao;


};

#endif // DISTRIBUICOESLINUX_H
