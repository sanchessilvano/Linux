#ifndef PROGRAMALINUX_H 
#define PROGRAMALINUX_H
#include<iostream>
#include<string>
using namespace std;
using std::string;
using std::getline;
using std::cout;
using std::endl;


class Programa
{
    friend ostream &operator<<( ostream &, const Programa &); 
public:
    Programa(const string &);
    virtual~Programa();
    
    void setNomePrograma(const string &);
    
    
    void infoPrograma();

private:
    string nomePrograma;
    
};

#endif // PROGRAMALINUX_H
