#ifndef DISTRIBUICOESLINUX_H
#define DISTRIBUICOESLINUX_H
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
using std::string;
using std::getline;
using std::cout;
using std::endl;


class DistribuicoesLinux
{
    friend ostream &operator<<( ostream &, const DistribuicoesLinux &);

public:
    DistribuicoesLinux();
    ~DistribuicoesLinux();
    
    DistribuicoesLinux(string [], int );//TIRA NO CONST NA HORA DE FICAR DINAMICO
    
    DistribuicoesLinux(const DistribuicoesLinux &p);
    
    //----------------------------------FIM CONSTRUTORES----------------------------------------  
    int getSize()const;
    
    const DistribuicoesLinux &operator=(const DistribuicoesLinux &);
    bool operator==( const DistribuicoesLinux & )const;
    
    bool operator!=( const DistribuicoesLinux &right )const
    {
        return! (*this==right);
    }
    
    string &operator[] (int);
    
    string operator[] (int)const;
    
    
    void setDistribuicoesLinux(const string[],int);
    
    void infoDistribuicoes() const;
    
    //ALOCAÇÃO
    void adicionaDistribuicao(string &novaDistribuicao);
    
    void exibe()const;
    
    void alocar(int);
    
    void desalocar( );
    
private:
    string *nomesDistribuicoesLinux;
    int sizenomesDistribuicoesLinux;
    string novaDistribuicao;


};

#endif // DISTRIBUICOESLINUX_H
