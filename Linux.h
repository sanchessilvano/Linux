#ifndef LINUX_H
#define LINUX_H
#include "SistemaOperacional.h"



class Linux : public SistemaOperacional
{
    friend ostream &operator<<( ostream &, const Linux &); 
public:
    Linux( char* ,int ,int,double ,bool ,const string&,const string&);
    Linux (const Linux &);
    virtual~Linux();
    
    
//FUNCOES PARA DIFERENCIAR
    void abrirPrograma ();
    
    void abrirArquivo ();
    
    void infoSistema();

    void modificaPrograma(double);
    
    void exibeCodigoFonte(double);
    

//sobrecarga de operadores
const Linux &operator= (const Linux &);

bool operator==(const Linux &)const;
    
bool operator!=(const Linux &)const;

    
private:
string KernelLinux="Kernel Linux 5";

string codigoFonte = "COdigo fonte Mozila";
};

#endif // LINUX_H
