#ifndef SISTEMADEARQUIVOS_H
#define SISTEMADEARQUIVOS_H
#define SISTEMAOPERACIONAL_H
#include<iostream>
#include<string>

using namespace std;
using std::string;
using std::getline;
using std::cout;
using std::endl;

class SistemaDeArquivos
{
    friend ostream &operator<<( ostream &, const SistemaDeArquivos &); 
public:
    SistemaDeArquivos(const char*,int,int);
    SistemaDeArquivos(const SistemaDeArquivos &);
    virtual~SistemaDeArquivos();
    
    void setNomeDoSistema(const string &);
    
    void setLimiteDeCaractere(int);
    
    void setCapacidadeDeArmazenamento(int);
    
    void inicializar(const char*,int,int);
    
    void destruir();
    
    void mudarNome(char);
    
    void imprimi();
    
    bool operator==(const SistemaDeArquivos &)const;
    
    bool operator!=(const SistemaDeArquivos &)const;
    
    const SistemaDeArquivos &operator=(const SistemaDeArquivos &);
    
private:
    char *nomeDoSistema;
    int maxCaractereNome;
    int capacidadeDeArmazenamento;
};

#endif // SISTEMADEARQUIVOS_H
