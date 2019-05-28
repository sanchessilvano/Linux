#ifndef REPOSITORIO_H
#define REPOSITORIO_H
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
using std::string;
using std::getline;
using std::cout;
using std::endl;


class Repositorio
{
    friend ostream &operator<<( ostream &, const Repositorio &);

public:
    Repositorio();
    ~Repositorio();
    
    Repositorio(string [],int);
    
    Repositorio(const Repositorio &p);
    
    //----------------------------------FIM CONSTRUTORES----------------------------------------  
    int getSize()const;
    
    const Repositorio &operator=(const Repositorio &);
    bool operator==( const Repositorio & )const;
    
    bool operator!=( const Repositorio &right )const
    {
        return! (*this==right);
    }
    
    string &operator[] (int);
    
    string operator[] (int)const;
    
    void setRepositoriosLinux( string[],int);
    
    void info_Respositorio() const;


private: 
string *nomesProgramas;
int sizenomesProgramas;
};//aaa

#endif // REPOSITORIO_H