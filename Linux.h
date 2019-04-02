#ifndef LINUX_H
#define LINUX_H

class Linux
{
public:

    Linux( string );
    
    ~Linux();
    
    void upTime( );
    
    void setHoras( int  );
    
private:
    int horas;
    

};

#endif // LINUX_H
