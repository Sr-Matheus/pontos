#include <iostream>
#include <cstdlib>
#include <time.h>
#include <graphics.h>
#include "ponto.h"

ponto::ponto()
{
    valor_x = 0.0;
    valor_y = 0.0;
    srand(time(NULL));
}

ponto::~ponto(){}

void ponto::set_x(double var)
{
    valor_x = var;
}

void ponto::set_y(double var)
{
    valor_y = var;
}

//Metódos publicos;

double ponto::get_x()
{
    double x = valor_x;
    return x;
}

double ponto::get_y()
{
    double y = valor_y;
    return y;
}

void ponto::definir_pontos()
{
    set_x(rand()%10);
    set_y(rand() % 10);
}

void ponto::definir_pontos(double x, double y)
{
    set_x(x);
    set_y(y);
}

void ponto::imprimir_valores()
{
    std::cout << "X: " << valor_x << " " << "Y: " << valor_y << std::endl;
}

ponto ponto::operator+ (ponto a)
{
    ponto c;
    c.valor_x = valor_x + a.valor_x;
    c.valor_y = valor_y + a.valor_y;
    return c;
}

bool ponto::operator==(ponto a)
{
    bool retorno = false;

    if(a.valor_x == valor_x and a.valor_y == valor_y)
    {
        retorno = true;
    }

    return retorno;

}

bool ponto::operator==(double a)
{
    bool retorno = false;
    
    if (valor_x == a and valor_y == a)
    {
        retorno = true;
    }

    return retorno;
}