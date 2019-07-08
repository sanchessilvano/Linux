#include "SistemaDeArquivos.h"
#include <string.h>
#include <iostream>
#include<stdlib.h>
using std::string;

SistemaDeArquivos::SistemaDeArquivos(const char* novoNomeDoSistema,int novoMaxCaractereNome,int novaCapacidadeDeArmazenamento)
{
    inicializar(novoNomeDoSistema,novoMaxCaractereNome,novaCapacidadeDeArmazenamento);
}

SistemaDeArquivos::SistemaDeArquivos(const SistemaDeArquivos &copia)
{
     inicializar(copia.nomeDoSistema,copia.maxCaractereNome,copia.capacidadeDeArmazenamento);
}

void::SistemaDeArquivos::inicializar(const char* novoNomeDoSistema,int novoMaxCaractereNome,int novaCapacidadeDeArmazenamento)
{
    int tam = strlen(novoNomeDoSistema) + 1;
    nomeDoSistema = new char[tam];
    strcpy(nomeDoSistema,novoNomeDoSistema);
    maxCaractereNome=novoMaxCaractereNome;
    capacidadeDeArmazenamento=novaCapacidadeDeArmazenamento;
}


    void SistemaDeArquivos::setNomeDoSistema(const string &NomeDoSistema_)
    {
        //this->nomeDoSistema=NomeDoSistema_;
    }
    
    void SistemaDeArquivos::setLimiteDeCaractere(int maxCaractereNome_)
    {
        this->maxCaractereNome=maxCaractereNome_;
    }
    
    void SistemaDeArquivos::setCapacidadeDeArmazenamento(int capacidadeDeArmazenamento_)
    {
        this->capacidadeDeArmazenamento=capacidadeDeArmazenamento_;
    }
    
    void SistemaDeArquivos::imprimi()
    {
        cout<<"Nome do sistema de arquivos..............."<<nomeDoSistema<<endl;
        cout<<"Limite de caractere No nome do arquivo...."<<maxCaractereNome<<endl;
        cout<<"Capaciade máxima de armazenamento........."<<capacidadeDeArmazenamento<<" GB"<<endl;
        cout<<".........................................."<<"\n";
        cout<<"\n"<<endl;
    }
    
    void SistemaDeArquivos::mudarNome(char novoNome)
    {
    nomeDoSistema[0]=novoNome;
    }





//sobrecarga de operadores
ostream &operator<<( ostream &output, const SistemaDeArquivos &numero) 
{
    output<<"Nome do sistema de arquivos: "<<numero.nomeDoSistema<<" \nMax de Caracteres no nome do arquivo: "<<numero.maxCaractereNome<<" \nTamanho Max da particao: "<<numero.capacidadeDeArmazenamento<<" Gigas"<<endl;
    return output;
}



bool SistemaDeArquivos::operator==(const SistemaDeArquivos &right)const
{
    if(nomeDoSistema!=right.nomeDoSistema){
        return false;
    }else{
        return true;
    }
        
}

bool SistemaDeArquivos::operator!=(const SistemaDeArquivos &right)const
 {
    return! (*this==right);
 }
 
 
const SistemaDeArquivos &SistemaDeArquivos::operator=(const SistemaDeArquivos &right)
{
    if (&right!=this)
    {
        destruir();
        
        inicializar(right.nomeDoSistema,right.maxCaractereNome,right.capacidadeDeArmazenamento);
    }
    return *this;
}

void SistemaDeArquivos::destruir()
{
    delete [] nomeDoSistema;
    maxCaractereNome=0;
    capacidadeDeArmazenamento=0;
}

SistemaDeArquivos::~SistemaDeArquivos()
{
   destruir();
}
