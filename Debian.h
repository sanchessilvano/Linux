#ifndef DEBIAN_H
#define DEBIAN_H
#include "Linux.h"

class Debian:public Linux
{
    friend ostream &operator<<( ostream &, const Debian &); 
public:
    Debian( char* novoNomeDoSistema,int novaAquiteturaDoSistema,int novoComandoDoAdministrador,double novaBuild,bool novoLligado,const string &KernelLinux,const string&,const string&);
    Debian(Debian &);
    virtual~Debian();

//sobrecarga de operadores
const Debian &operator= (const Debian &);

bool operator==(const Debian &)const;
    
bool operator!=(const Debian &)const;

private:
string arquiteturaAdicional = "64-bit little-endian MIPS";
};

#endif // DEBIAN_H
