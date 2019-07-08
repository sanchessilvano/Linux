#ifndef UBUNTU_H
#define UBUNTU_H
#include "Linux.h"



class Ubuntu:public Linux
{
    friend ostream &operator<<( ostream &, const Ubuntu &);
public:
    Ubuntu( char* novoNomeDoSistema,int novaAquiteturaDoSistema,int novoComandoDoAdministrador,double novaBuild,bool novoLligado,const string &nomePrograma,const string &KernelLinux,const string &criptografiaAdiantum);
    Ubuntu(Ubuntu &);
    virtual~Ubuntu();


//FUNÇÕES


int getMaximoMemoriaRam();

int getDataDeCriacaoDoSistema();

void exibeTipoDeCriptografia();

void criAreaDeTrabalhoVirtual();

void infoSistema();

//sobrecarga de operadores
const Ubuntu &operator= (const Ubuntu &);

bool operator==(const Ubuntu &)const;
    
bool operator!=(const Ubuntu &)const;    
    
private:
string criptografiaAdiantum = "Adiantum versao 2";

int numeroDaAreaDeTrabalho=1;

static const int dataDeCriacaoDoSistema=1991;

static int numeroDeVeroes;

const int maximoMemoriaRam=1024;


};

#endif // UBUNTU_H
