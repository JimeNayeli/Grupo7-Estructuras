#include <iostream>
#include "Auxiliar.h"
#include "Operacion.h"
#include "Validacion.h"
using namespace std;

int main()
{
	int opc;
	do {
		Data _data;
		int n;
		Operacion op;
		do {
			n = Utils::Validation::validation_numbers<int>("Ingrese la dimension:");
		} while (n <= 0);
		_data.set_exp(n);
		op.print(_data);
		opc = Utils::Validation::validation_numbers<int>("Desea contiuar con el programa Si-1/No-0: ");
	} while (opc != 0);


}