#include <iostream>
#include <cstdlib>
#include <time.h>
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
    set_x(rand()%100);
    set_y(rand() % 100);
}

void ponto::definir_pontos(double x, double y)
{
    set_x(x);
    set_y(y);
}