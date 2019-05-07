#ifndef REPOSITORIO_H
#define REPOSITORIO_H
#include<iostream>
#include<string.h>
using namespace std;
using std::string;
using std::getline;
using std::cout;
using std::endl;


class Repositorio
{

public:
    Repositorio();
    ~Repositorio();
    
    Repositorio(string repositorio[]);
    
    Repositorio(const Repositorio &p);
    //----------------------------------FIM CONSTRUTORES----------------------------------------  
    string info_Respositorio()const;


private: 
const static int SIZEREPOSITORIO=3;
static string repositorio[SIZEREPOSITORIO]; 
};

#endif // REPOSITORIO_H