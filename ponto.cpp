#include "ponto.h"

ponto::ponto()
{
    ponto_x = 0.0;
    ponto_y = 0.0;
}

ponto::~ponto()
{

}

void ponto::set_x(double var)
{
    ponto_x = var;
}

void ponto::set_y(double var)
{
    ponto_y = var;
}

double ponto::get_x()
{
    double x = ponto_x;
    return x;
}

double ponto::get_y()
{
    double y = ponto_y;
    return y;
}

void ponto::definir_pontos(double x, double y)
{
    set_x(x);
    set_y(y);
}