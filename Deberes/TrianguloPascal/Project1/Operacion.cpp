#include "Operacion.h"
#include <windows.h>
using namespace std;
#include <iostream>

int Operacion::factorial(int n) {

    if (n < 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}
int Operacion::combinatorial(int n, int m) {
    int combinatorial;
    combinatorial = factorial(n) / (factorial(m) * factorial(n - m));
    return combinatorial;
}


void Operacion::print(Data _data) {

    for (int i = 0; i <= _data.get_exp(); i++)
    {
        cout << "Exponente " << i << " ";
        for (int j = _data.get_exp() - i; j > 0; j--)
        {
            cout << " ";
        }
        
        for (int k = 0; k <= i; k++)
        {
            cout << char(combinatorial(i,k)) << " ";
        }
        cout << endl;
    }
}