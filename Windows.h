
#ifndef WINDOWS_H
#define WINDOWS_H
#include "SistemaOperacional.h"

class Windows:public SistemaOperacional
{
    friend ostream &operator<<( ostream &, const Windows &); 
public:
    Windows( char*,int,int,double,bool,const string&,const string&);
    Windows(Windows &);
    virtual~Windows();
    

//FUNÇÕES
    
    void setJogo(string&);
    
    string getJogo();
    
    void abrirPrograma ();
    
    void abrirArquivo ();
    
    void infoSistema();
    
    void instalaJogo(int);
    
    void xboxGamePass();
    
//sobrecarga de operadores
const Windows &operator= (const Windows &);

bool operator==(const Windows &)const;
    
bool operator!=(const Windows &)const;

private:
string jogoAAA="CyberPunk 2077";

string plataforma = "Xbox game pass";
};

#endif // WINDOWS_H
