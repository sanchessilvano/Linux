#ifndef EXT3_H
#define EXT3_H
#include "SistemaDeArquivos.h"

class EXT3: public SistemaDeArquivos
{
    friend ostream &operator<<( ostream &, const EXT3 &); 
public:
    EXT3(const char* ,int ,int ,string );
    EXT3(const EXT3 &);
    virtual~EXT3();
    
//sobrecarga de operadores
const EXT3 &operator= (const EXT3 &);

bool operator==(const EXT3 &)const;
    
bool operator!=(const EXT3 &)const;

private:
string journalingBlockDevice = " ";
};

#endif // EXT3_H
