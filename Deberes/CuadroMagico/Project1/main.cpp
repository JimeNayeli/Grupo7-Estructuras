#include <iostream>
#include "Operacion.h"
#include "Matriz.h"
#include "Validacion.h"
using namespace std;
/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Programa: Potencia de matriz
 * Autor:Jimena Tutillo
 * Fecha de creacion: Martes, Febrero 9, 2022 4:10:23 PM
 * Fecha de modificacion: Martes, Febrero 9, 2022 5:50:23 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos

***********************************************************************/

int main()
{
    int tam;
    Operation op;
    Matriz matrix_1;
    std::cout << "*****CUADRADO MAGICO*******\n";
    cout << "Ingrese la dimension del cuadrado (#impar) ";
    tam = Auxiliar::Validacion::validar_numbers<int>("");
    while (tam % 2 == 0) {
        cout << "Ingrese la dimension del cuadrado (#impar)";
        tam = Auxiliar::Validacion::validar_numbers<int>("");
    }

    matrix_1.set_matriz(op.segmentar(tam));
    op.wax(matrix_1, tam);
    op.magic_square(matrix_1, tam);
    op.print(matrix_1, tam);
}
