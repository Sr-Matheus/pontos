#include "triangulo.h"

triangulo::triangulo()
{
    ponto_a.definir_pontos();
    ponto_b.definir_pontos();
}

triangulo::~triangulo(){}

void triangulo::definir_pontos()
{
    calcula_pontos();
}

void triangulo::calcula_pontos()
{
    double valor_zero = 0.0;

    if(ponto_a == ponto_b)
    {
        ponto_b.definir_pontos();
    }

    if (ponto_a == (valor_zero))
    {
        ponto_a.definir_pontos();    
    }

    if (ponto_b == (valor_zero))
    {
        ponto_b.definir_pontos();
    }
    
    ponto_c = ponto_a + ponto_b;
}

void triangulo::imprimir_pontos()
{
    definir_pontos();
    ponto_a.imprimir_valores();
    ponto_b.imprimir_valores();
    ponto_c.imprimir_valores();
}