#ifndef NTFS_H
#define NTFS_H
#include "SistemaDeArquivos.h"

class NTFS:public SistemaDeArquivos
{
    friend ostream &operator<<( ostream &, const NTFS &); 
public:
    NTFS(const char* ,int ,int ,string );
    NTFS(const NTFS &);
    virtual~NTFS();

//sobrecarga de operadores
const NTFS &operator= (const NTFS &);

bool operator==(const NTFS &)const;
    
bool operator!=(const NTFS &)const;


private:
string senhaDoArquivo = " ";
};

#endif // NTFS_H
