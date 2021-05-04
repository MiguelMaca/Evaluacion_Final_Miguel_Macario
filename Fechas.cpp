#include <iostream>

using namespace std;

int main()
{
	//DECLARACION DE VARIABLES
	int d1, d2, m1, m2, a1, a2, r1,r2;

	cout << "CALENDARIO" << endl << endl;

	cout << "PRIMERA FECHA---------" << endl;
	cout << "Ingrese dia: ";
	cin >> d1;
	cout << "Ingrese mes: ";
	cin >> m1;
	cout << "Ingrese anio: ";
	cin >> a1;

	cout << endl << "SEGUNDA FECHA---------" << endl;
	cout << "Ingrese dia: ";
	cin >> d2;
	cout << "Ingrese mes: ";
	cin >> m2;
	cout << "Ingrese anio: ";
	cin >> a2;

	//evaluacion:  4/3/2021
	//   10/5/2021
	//   10/5/2023

	if (  (a1 - 2021) < (a2 - 2021) ) {
		cout << "FECHA 1 es mas cercana";
	}
	else if ( (a1 - 2021) < (a2 - 2021) ) {
		cout << "FECHA 2 es mas cercana";
	}
	else {
		//iguales
		if ((m1 - 5) < (m2 - 5)) {
			cout << "FECHA 1 es mas cercana";
		}
		else if ((m1 - 5) > (m2 - 5)) {
			cout << "FECHA 2 es mas cercana";
		}
		else {
			//meses son iguales
			if ((d1 - 4) < (d2 - 4)) {
				cout << "FECHA 1 es mas cercana";
			}
			else if ((d1 - 4) > (d2 - 4)) {
				cout << "FECHA 2 es mas cercana";
			}
			else {
				//FECHAS IGUALES
				cout << "AMBAS FECHAS SON IDENTICAS";
			}
		}
	}

	cout << endl << endl;
	
	//ENTRADA DE DATOS
	system("pause");
}