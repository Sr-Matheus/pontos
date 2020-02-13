#include "ponto.h"
#include <iostream>
#include

using namespace std;

int main (void)
{
    

    ponto teste;
    teste.definir_pontos();
    
    cout << teste.get_x() << endl << teste.get_y() << endl;

    system("PAUSE");
    
    
    return 0;
}