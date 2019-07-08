#include<locale>
#include <stdio.h>
#include <vector>
#include "SistemaOperacional.h"
#include "SistemaDeArquivos.h"
#include "Linux.h"
#include "Windows.h"
#include "Mac.h"
#include "Ubuntu.h"
#include "Debian.h"
#include "Linux_Educacional.h"
#include "Fat32.h"
#include "NTFS.h"
#include "EXT3.h"
#include "Programa.h"
#include <iostream>
#include <string>
#include <typeinfo>
#include<stdlib.h>
using std::string;
using std::cout;
using std::getline;
using namespace std;

//ATUALIZAÇÃO 26/06
int main(int argc, char **argv)
{
setlocale(LC_ALL,"portuguese");
    
    int instalar;
    string nomesist;
    string usuario="joao";
    string senha="123";
    int usarfuncao;
    
    int subclasse;
    
   
    vector<SistemaOperacional*>SO(4);
    SO[0] = new Linux ("Linux",32,1,14.02,1,"Moziila","Kernel Linux 5");
    SO[1] = new Linux ("Linux 2",32,1,14.02,1,"Moziila","Kernel Linux 5");
    SO[2] = new Windows("Windows",64,1,14393.2724,1,"Mozila","CyberPunk 2077");
    SO[3] = new Mac("Mac OS",64,1,14.10,1,"Mozilla");
    
    Ubuntu *ubuntu1 = new Ubuntu("Ubuntu",64,1,14.02,1,"Moziila","Kernel Linux 5","versao 3");
    Debian *debian1 = new Debian("Debian",32,1,9,1,"Moziila","Kernel Linux 5","64-bit little-endian MIPS");
    Linux_Educacional *le = new Linux_Educacional("Linux Educacional",32,1,6.1,1,"Moziila","Kernel Linux 5",1);
   
    
    
    for ( size_t i = 0; i < SO.size(); i++ )
    {   
        
        if( typeid( *SO[ i ] ).name()==typeid(Linux).name()) // se for um linux recebe a mensagem de boas vindas + as info
        {
                Linux *derivedPtr = dynamic_cast < Linux * >( SO[ 0 ] );
                cout << "Bem vindo ao "<<typeid( *derivedPtr ).name()<<"\n";
                SO[ i ]->infoSistema();
        }else if( typeid( *SO[ i ] ).name()==typeid(Windows).name())
        {
                Windows *derivedPtr = dynamic_cast < Windows * >( SO[ 2 ] );
                cout << "Bem vindo ao "<<typeid( *derivedPtr ).name()<<"\n";
                SO[ i ]->infoSistema(); // output employee information
        }else{
            
                SO[ i ]->infoSistema(); // output employee information
                
        }
    }
    
    
    Linux *d=dynamic_cast<Linux*>(SO[0]);//convertendo para usar as funções proprias da classe concreta
    
    Windows *e=dynamic_cast<Windows*>(SO[0]);
    
    Mac *f=dynamic_cast<Mac*>(SO[0]);
    
    cout<<"Escolha o sistema para exibir suas informacoes\n";
    
    cout<<" 1 - LInux\n 2 - Windows\n 3 - Mac\n 4 - Ubuntu\n 5 - Debian\n 6 - Linux Educacional\n";
    
    cin>>subclasse;
    
    switch(subclasse)
    {
       case 1: 
    
    //chamada das funções para classe derivada Linux
    cout<<"\n"<<endl;
    
    cout<<"Exibindo innformacoes de Linux:\n"<<endl;
    
    SO[0]->abrirPrograma();
    
    SO[0]->abrirArquivo ();
    
    SO[0]->infoSistema();
    
    
    int visualizaCodigoFonte;
    cout<<"Deseja visualizar o codigo fonte do programa?\n 1 - sim\t 2-nao"<<endl;
    cin>>visualizaCodigoFonte;
    d->exibeCodigoFonte(visualizaCodigoFonte);
    cout<<"\n"<<endl;
    
    
    int alterarPrograma;
    cout<<"Deseja modificar o kernel do linux?\n 1 - sim\t 2-nao"<<endl;
    cin>>alterarPrograma;
    d->modificaPrograma(alterarPrograma);
    cout<<"\n"<<endl;
    
    break;
    
    
        case 2: 
    //chamada das funções para classe derivada Windows
    SO[2]->abrirPrograma();
    
    SO[2]->abrirArquivo ();
    
    SO[2]->infoSistema();
    
    
    cout<<"Deseja instalar um jogo no Windos?\n 1 - sim\t 2-nao"<<endl;
    cin>>instalar;
   
    e->instalaJogo(instalar);
    
    cout<<"\n"<<endl;
    
    e->xboxGamePass();
    cout<<"\n"<<endl;
    break;
    
    
        case 3: 
    //chamada das funções para classe derivada MAC
    SO[3]->abrirPrograma();
    
    SO[3]->abrirArquivo ();
    
    SO[3]->infoSistema();
    
    f->multitouch ();
    
    //string usuario="joao";
    //string senha="123";
    //int usarfuncao;
    
    cout<<"ativar funcao de login automatico no Mac OS?\n 1 - sim\t 2-nao"<<endl;
    cin>>usarfuncao;
    
    if(usarfuncao==1)
    {
        
            f->iniciaSessao(usuario,senha);
           
    }else{
    exit(0);
    }
    break;
    
        case 4: 
    //chamada das funções para classe derivada de Linux
    cout<<"\n"<<endl;
    ubuntu1->criAreaDeTrabalhoVirtual();
    
    cout<<"\n"<<endl;
    ubuntu1->infoSistema();
    
    cout<<"\n"<<endl;
    ubuntu1->exibeTipoDeCriptografia();
    
    
    break;
    
    
        case 5:
    debian1->infoSistema();
    break;
    
    
        case 6:
    le->infoSistema();
    //programa1->infoPrograma();
    cout<<"\n"<<endl;
    break;
    }
    
    
    
    //SOBRECARGA DO OPERADOR DA CLASSE LINUX
    
    /*cout<<"\n"<<endl;
    
    cout<<"Sobrecarga de operadores nas classes derivadas de Sistema Operacional\n"<<endl;
    
    cout<<"---------Sobrecarga do operador <<------------ "<<"\n";
    cout<<SO[0]<<endl;
    
    
    cout<<"---------Sobrecarga do operador ==------------ "<<"\n";
    if(SO[0]==SO[1])
    {
        cout<<"Os nomes dos sistemas operacionais sao iguais"<<"\n";
    }else{
        cout<<"Os nomes dos sistemas operacionais nao sao iguais"<<"\n";
    }
    cout<<"\n";
    
    cout<<"---------Sobrecarga do operador !=-------------"<<"\n";
    if(SO[0]!=SO[1])
    {
        cout<<"Os nomes dos sistemas operacionais sao  diferentes"<<"\n";
    }else{
        cout<<"Os nomes dos sistemas operacionais sao iguais"<<"\n";
    }
    
    cout<<"\n";
    
    
    cout<<"---------Sobrecarga do operador =--------------"<<"\n";
    SO[0]=SO[1];
    
    SO[0]->mudarNome('A');//para checar se a copia é profunda
    
    SO[1]->infoSistema();
    SO[0]->infoSistema();
    
    
    cout<<"\n"<<endl;*/
	
    // release objects pointed to by vector's elements
for ( size_t j = 0; j < SO.size(); j++ )
{
// output class name
cout << "deleting object of " << typeid( *SO[j] ).name() << endl;

 delete SO[ j ];
} // end for
return 0;
}//end main
