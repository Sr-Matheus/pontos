#include <iostream>
#include <conio.h>
#include "ponto.h"

using namespace std;

int main (void)
{
    ponto a, b, c, zero;
    ponto soma;
    
    a.definir_pontos();
    a.imprimir_valores();

    b.definir_pontos();
    b.imprimir_valores();

    c.definir_pontos();
    c.imprimir_valores();
    
    zero. definir_pontos(0.0,0.0);

    soma = (a + b) + c;
    cout << "\n\n(A + B) + C" << endl;
    soma.imprimir_valores();

    soma = a + (b + c);
    cout << "\nA + (B + C)" << endl;
    soma.imprimir_valores();

    soma = a + b;
    cout << "\n\nA + B" << endl;
    soma.imprimir_valores();

    soma = b + a;
    cout << "\nB + A" << endl;
    soma.imprimir_valores();

    soma = a + zero;
    cout << "\n\nA + 0" << endl;
    soma.imprimir_valores();

    system("PAUSE");
    return 0;
}