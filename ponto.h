#ifndef __ponto__h
#define __ponto__h

class ponto
{
private:
    
    double ponto_x, ponto_y;
    
protected:
    
    void set_x(double);
    void set_y(double);

public:

    ponto();
    ~ponto();
    void definir_pontos(double,double);
    double get_x();
    double get_y();
};

#endif