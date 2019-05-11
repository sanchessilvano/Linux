#ifndef REPOSITORIO_H
#define REPOSITORIO_H
#include<iostream>
#include<string>
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
    
    Repositorio(const string [],int);
    
    Repositorio(const Repositorio &p);
    //----------------------------------FIM CONSTRUTORES----------------------------------------  
    void setRepositoriosLinux(const string[],int);
    
    void info_Respositorio() const;


private: 
string *nomesProgramas;
int sizenomesProgramas;
};

#endif // REPOSITORIO_H