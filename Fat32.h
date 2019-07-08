#ifndef FAT32_H
#define FAT32_H
#include "SistemaDeArquivos.h"

class Fat32:public SistemaDeArquivos
{
    friend ostream &operator<<( ostream &, const Fat32 &); 
public:
    Fat32(const char*,int,int ,int );
    Fat32(const Fat32 &);
    virtual~Fat32();

//sobrecarga de operadores
const Fat32 &operator= (const Fat32 &);

bool operator==(const Fat32 &)const;
    
bool operator!=(const Fat32 &)const;


private:
int tamanhoMaximoDoArquivo = 4096;
};

#endif // FAT32_H
