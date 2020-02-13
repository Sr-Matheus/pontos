#include "ponto.h"
#include <iostream>

using namespace std;

int main (void)
{
    ponto pontos;
    pontos.definir_pontos(10.0,21.5);
    double var = pontos.get_x;

    cin>> var;
    
    system("PAUSE");
    
    
    return 0;
}