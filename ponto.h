#ifndef __ponto__h
#define __ponto__h

class ponto
{
    
private:
    
    double valor_x, valor_y;
    
protected:
    
    void set_x(double);
    void set_y(double);

public:

    ponto();
    ~ponto();
    double get_x();
    double get_y();
    void definir_pontos();
    void definir_pontos(double x,double y);
    void imprimir_valores();
    ponto operator+ (ponto a);
    bool operator==(ponto a);
    bool operator==(double a);

};

#endif