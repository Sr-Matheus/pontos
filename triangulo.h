#ifndef __triangulo__h
#define __triangulo__h
#include "ponto.h"

class triangulo
{
private:
    
    ponto ponto_a, ponto_b, ponto_c;

protected:

    void calcula_pontos();
    void definir_pontos();

public:
    
    triangulo();
    ~triangulo();
    void imprimir_pontos();
};


#endif