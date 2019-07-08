#ifndef LINUX_EDUCACIONAL_H
#define LINUX_EDUCACIONAL_H
#include "Linux.h"

class Linux_Educacional:public Linux
{
    friend ostream &operator<<( ostream &, const Linux_Educacional &);
public:
    Linux_Educacional( char* novoNomeDoSistema,int novaAquiteturaDoSistema,int novoComandoDoAdministrador,double novaBuild,bool novoLligado,const string &KernelLinux,const string& ,int );
    Linux_Educacional(Linux_Educacional &);
    virtual~Linux_Educacional();


//sobrecarga de operadores
const Linux_Educacional &operator= (const Linux_Educacional &);

bool operator==(const Linux_Educacional &)const;
    
bool operator!=(const Linux_Educacional &)const;

private:
int multiterminal = 1;
};

#endif // LINUX_EDUCACIONAL_H
