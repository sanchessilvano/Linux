#include<locale.h>
#include <stdio.h>
#include "Linux.h"
#include "DistribuicoesLinux.h"
#include <iostream>
#include"Linux.h"
using std::cout;
using std::getline;
using namespace std;




int main(int argc, char **argv)
{
setlocale(LC_ALL,"portuguese");
    
    //FUNCAO 1
    Linux *estado=new Linux(1);
    
    estado->setLigado(1);
    
    if(estado->getLigado())
    {
        cout<<"\nSistema Operaccionnal Inicializado\n"<<endl;
    }else{
        cout<<"nSistema Operaccionnal nao Inicializado\n"<<endl;
    }
    
    
    //FIM DA FUNCAO 1
    
    //FUNCAO 2
    int contador;
    Linux meuSistema;
    meuSistema.tempoDeAtividade(120);
    string nome;
    cout<<"Inciciando o relogio\n"<<meuSistema.getTempo()<<endl;
    
    cout<<"\nEscolha o tempo de atividade da máquina em minutos\n"<<endl;
    cin>>contador;
    meuSistema.setTempo(contador);
    
    cout<<endl;
    meuSistema.tempoDeAtividade(contador);
    //FIM DA FUNCAO 1
    
	
    
    //objeto do construtor;
    Linux info("Joao",64);
    
     
     
    
    cout<<"\nSaida do Contsrutor\n"<<endl;
    
    cout<<"Nome do Usuario: "<<info.getNomeDoUsuario()<<endl;
    cout<<"Arquitetura do sistema: "<<info.getAquiteturaDoSistema()<<" bits"<<endl;
    //cout<<"O tipo de usuario e: "<<info.mostra_Tipos_Usuarios()<<endl;
    //fiim objeto do construtor;
    
    //OBJETO DO CONST SOBRRECARREGADO 1
    Linux mac1("Ubuntu");
    Linux mac2;
    
    cout<<"\nSaida do 1º construtor sobrecarregado\n "<<endl;
    cout<<"Esta distribuicao e:"<<mac1.getDistribuicao()<<endl;
    cout<<"Esta distribuicao e:"<<mac2.getDistribuicao()<<endl;
    
    //OBJETO DO CONST SOBRRECARREGADO 2
    Linux build1;
    Linux build2(14.09);
    
    cout<<"\nSaida do 2º construtor sobrecarregado \n"<<endl;
    cout<<"Numero da Build 01 e: "<<build1.getBuild()<<endl;
    cout<<"Numero da Build 02 e: "<<build2.getBuild()<<endl;
    
    //SAIDA DDA FUNCAO SOBRRECARREGADA 1
    Linux usuario1;
    Linux usuario2;
    usuario1.checaUsuario();
    usuario2.checaUsuario("Jose");
    
    cout<<"\nSAIDA DA FUNCAO SOBRECARREGADA 1\n"<<endl;
    
    cout<<"Nome do Usuario 01 verificado e: "<<usuario1.getNome()<<endl;
    cout<<"Nome do Usuario 02 verificado e: "<<usuario2.getNome()<<endl;
    
    usuario1.checaUsuario(0);
    usuario2.checaUsuario(37);
    cout<<"ID do Usuario 01 verificado e: "<<usuario1.getId()<<endl;
    cout<<"ID do Usuario 02 verificado e: "<<usuario2.getId()<<endl;
    
    //SAIDA DO CONSTRUTOR DE CÓPIA(COPIADO DO CONSTRUTOR INFO)
    cout<<"\nSAIDA DO CONSTRUTOR DE CÓPIA(COPIADO DO CONSTRUTOR INFO)\n"<<endl;
    Linux f1=info;
    //f1.mensagem();
    cout<<"Copia do nome e: "<<f1.getNomeDoUsuario()<<endl;
    cout<<"Copia da arquitetura do sistema e: "<<f1.getAquiteturaDoSistema()<<endl;
    //FIM SAIDA DO CONSTRUTOR DE CÓPIA
    
    //CONST E STATIC
    Linux propriedade;
    
    cout<<"\nSaída do construtor com atributos static e const\n"<<endl;
    cout<<"Vesao atual do kernel linux e: "<<propriedade.getnumeroDoKernel()<<'\n';
    cout<<"Para checar o ip diggite: "<<propriedade.getChecaIP()<<'\n';
    cout<<"Data da criacao do Linux: "<<propriedade.getdataDeCriacaoDoSistema()<<'\n';
    Linux::showNumeroDeUsuarios();
    //FIM CONST E STATIC
    
    //SAÍDA DA CÓPIA DO CONSTRUTOR CONST E STATIC
    Linux copia_De_Propriedade;
    
    cout<<"\nSaída da copia do construtor com atributos static e const\n"<<endl;
    cout<<"COPIA DE Vesao atual do kernel linux e: "<<copia_De_Propriedade.getnumeroDoKernel()<<'\n';
    cout<<"COPIA DE Para checar o ip diggite: "<<copia_De_Propriedade.getChecaIP()<<'\n';
    cout<<"COPIA DE Data da criacao do Linux: "<<copia_De_Propriedade.getdataDeCriacaoDoSistema()<<'\n';
    Linux::showNumeroDeUsuarios();
    
    //IMPRIMINDO ARRAY STATIC
    Linux tabela;
    cout<<"Tabela de versoes do linux:"<<'\n';
    cout<<tabela.Mostra_versoes_Do_Linux()<<'\n';
    
    //Linux::versoesLinux();
    
    
    //SAIDA DAS CLASSES DE COMPOSIÇÃO
    Linux adf;
    cout<<"Usuarios: "<<'\n';
    cout<<adf.mostraUsuarios()<<'\n';
    
    //Linux::infor();
//abc    
    
    return 0;
}//end main
