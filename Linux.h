#ifndef LINUX_H
#define LINUX_H
#include<iostream>
#include<string>
using namespace std;
using std::string;
using std::getline;
using std::cout;
using std::endl;


class Linux
{
private:
    int horas=0;
    int contado=0;
    string nomeDoUsuario;
    int aquiteturaDoSistema;
    string distribuicao;
    double build=0.0;    
    bool ligado;
    string nome;
    int id;
    static int numeroDeUsuarios;
    static double numeroDoKernel;
    const string checaIP="ifconfig";
    const static string dataDeCriacaoDoSistema;
    

    
public:
    void setLigado(int boot);
    bool getLigado();
    
    //FUNCAO com implemetação no h como na primeira demosntração
    int tempoDeAtividade(int horas)
    {
        cout<<"\nSaida da funcao"<<endl;
        cout<<"Bem vindo\nA mauina desligara em: "<<horas<<" minutos!"<<endl;
    }
    
    void setTempo(int horas_)
    {
        horas=horas_;
    }
    
    int getTempo()
    {
        return horas;
    }
    //fim da funcao
    
    
    
    //CONSTRUTOR INFO
    Linux(const string &,int);
    void setNomeDoUsuario(string);
    string getNomeDoUsuario()const;//const adicionado para o construtor de cópia
    void setAquiteturaDoSistema(int);
    int getAquiteturaDoSistema()const;//const adicionado para o construtor de cópia
    //fim do construtor info
    
    
    //SOBRECARGA DE CONSTRUTOR
    Linux(const string &);
    void setDistribuicao(string);
    string getDistribuicao();
    
    //2ª sobrecarrga
    Linux(const double &);
    void setBuild(double);
    double getBuild();
    
    //FUNCAO SOBRECARREGADA 1
    
    void checaUsuario();
    void checaUsuario(string nome);
    void checaUsuario(int id);
    string getNome();
    int getId();
    
    //CÓPIA DE CONSTRUTOR:
    Linux(const Linux&);
    //fim do const ccópia

  
    //CONSTRUTOR COM CONST E STATIC
    Linux(int numeroDeUsuarios,double numeroDoKernel,string &dataDeCriacaoDoSistema,string checaIP);
    static void showNumeroDeUsuarios();//metodo static
    double getnumeroDoKernel();
    string getChecaIP()const;
    string getdataDeCriacaoDoSistema()const;
    //FIM CONSTRUTOR COM CONST E STATIC
   
   
   //CONSTRUTOR DE CÓPIA CONST E STATIC:
   Linux(const Linux&q,int,double,string,string);
   //FIM CONSTRUTOR DE CÓPIA CONST E STATIC:
    Linux();
    ~Linux();
   
    
    
    
    
    

};

#endif // LINUX_H
