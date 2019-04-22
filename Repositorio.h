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
    
private: 
const static int SIZEREPOSITORIO=3;
static string repositorio[SIZEREPOSITORIO]; 


public:
    Repositorio();
    ~Repositorio();
    Repositorio(string repositorio[SIZEREPOSITORIO]);
    
    string info_respositorio();

};

#endif // REPOSITORIO_H