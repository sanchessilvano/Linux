#ifndef LINUX_H
#define LINUX_H
#include <string>

using std::string;
class Linux
{
public:

    Linux( string );
    
    ~Linux();
    
    void upTime( );

    void setHoras( int  );

    Linux(const string &,);
    
    Linux(const string &, int); 

    void checaUsuario(const string &);
    void checaUsuario(int);

private:
    int horas;
    int horas_;
    string distribuicao;
    int build;
    string nome;
    int idUsuario;
    

};

#endif // LINUX_H
