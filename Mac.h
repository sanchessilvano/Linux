#ifndef MAC_H
#define MAC_H
#include "SistemaOperacional.h"

class Mac:public SistemaOperacional
{
    friend ostream &operator<<( ostream &, const Mac &); 
public:
    Mac( char* ,int ,int ,double ,bool,const string& );
    Mac(Mac &);
    virtual~Mac();
    
    

//FUNÇÕES
    void abrirPrograma ();
    
    void abrirArquivo ();
    
    void infoSistema (); 
    
    void iniciaSessao(string,string);
    
    void multitouch ();

//sobrecarga de operadores
const Mac &operator= (const Mac &);

bool operator==(const Mac &)const;
    
bool operator!=(const Mac &)const;

private:
   
};

#endif // MAC_H
