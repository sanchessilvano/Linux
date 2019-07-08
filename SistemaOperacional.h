#ifndef SISTEMAOPERACIONAL_H
#define SISTEMAOPERACIONAL_H
#include<iostream>
#include<string>
#include "Programa.h"

using namespace std;
using std::string;
using std::getline;
using std::cout;
using std::endl;

class SistemaOperacional
{
    friend ostream &operator<<( ostream &, const SistemaOperacional &); 
public:

    SistemaOperacional(char* novoNomeDoSistema,int novaAquiteturaDoSistema,int novoComandoDoAdministrador,double novaBuild,bool novoLligado,
    const string &novoNomePrograma);
    
    
    SistemaOperacional(const SistemaOperacional &);
    
    virtual~SistemaOperacional();
    
    //FUNCAO 1: Da o booot no sistema
    void setEstado_Do_Sistema(int boot);
    
    void getEstado_Do_Sistema()const;
    
    //FUNCAO 2: Define o o acesso ao usuario ja logado
    
    void setEscolhaAdministrador(int comandoDoAdministrador);
    
    void getEscolhaAdministrador()const;
    //FIM FUNCAO 2: Define o o acesso ao usuario ja logado
    
    void inicializar(const char*,int,int,double,bool,Programa);
    
    void setNomeDoSistema(char*);
    
    char getNomeDoSistema()const;
    
    void setAquiteturaDoSistema(int);
    
    int getAquiteturaDoSistema()const;
    
    void setBuild(double);
    
    double getBuild()const;
    
    void destruir();
    
    virtual void abrirPrograma () = 0;
    
    virtual void abrirArquivo () = 0;
    
    virtual void infoSistema() = 0;
    
    void mudarNome(char);
   
    bool operator==(const SistemaOperacional &)const;
    
    bool operator!=(const SistemaOperacional &)const;
    
    const SistemaOperacional &operator=(const SistemaOperacional &);

protected :

    int aquiteturaDoSistema;
    int comandoDoAdministrador;
    double build;    
    bool ligado;
    char *nomeDoSistema;
    Programa programa;
    
};

#endif // SISTEMAOPERACIONAL_H
