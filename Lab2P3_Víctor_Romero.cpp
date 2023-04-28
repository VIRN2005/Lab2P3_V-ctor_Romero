#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <locale>

using namespace std;

// Métodos 1er Ejercicio
void Array() {
	setlocale(LC_ALL, "spanish");
	srand(time(NULL));

	char arreglo[10];
	char arreglo_Ordenado[10];

	for (int i = 0; i < 10; i++) {
		arreglo[i] = ((char)(97 + rand() % 25));
	}

	cout << "Arreglo Desordenado: ";
	for (int i = 0; i < 10; i++) {
		cout << arreglo[i] << "  ";
	}
	cout << endl << endl;

	cout << "Arreglo Ordenado: ";
	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (arreglo[i] > arreglo[j]) {
				char temp = arreglo[i];
				arreglo[i] = arreglo[j];
				arreglo[j] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << arreglo[i] << "  ";
	}
	cout << endl << endl;
}

// Métodos 2ndo Ejercicio
int Factorial(int n) {
	setlocale(LC_ALL, "spanish");
	if (n == 0) { // Caso base
		return 1;
	}
	else { // Recursiva
		return n * Factorial(n - 1);
	}
}

void Triangulo(int n) {
	setlocale(LC_ALL, "spanish");
	for (int row = 0; row < n; row++) {
		for (int column = 0; column <= row; column++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
}

// Menú en Method
int menu() {
	setlocale(LC_ALL, "spanish");
	int opcion = 0;

	do {
		cout << "------- MENU ------- \n"
			<< "1) Ordenamiento y omisión en arreglos \n"
			<< "2) Factoriales y figuras \n\n"

			<< "0) SALIDA \n\n";

		cout << ">> Ingrese una opcion del menu: ";
		cin >> opcion;

		cout << "La opcion escojida es :" << opcion << endl << endl;

		switch (opcion) {
		case 0: {
			cout << "Gracias por participar!\n"
				<< "Feliz dia :D";
		}
			  break;

		case 1: {
			cout << "- 1) Ordenamiento y omisión en arreglos - \n";

			Array();
		}
			  break;

		case 2: {
			cout << "- 2) Factoriales y figuras - \n";

			cout << ">> Ingrese el Numero del Factorial: ";
			int num = 0;
			cin >> num;

			do {
				if (num < 0) {
					cout << ">> Ingrese el Numero del Factorial VALIDO: ";
					int num;
					cin >> num;
				}
			} while (num < 0);

			cout << "El factorial de " << num << " es " << num * Factorial(num - 1) << endl;
			Triangulo(Factorial(num));

		}
			  break;

		default: {
			cout << "Valor digitado no es valido\n";
		}
			   break;

		}

	} while (opcion != 0);

	return opcion;
}

int main() {
	setlocale(LC_ALL, "spanish");

	cout << "Victor I. Romero N. - 12211079" << endl
		<< "Lab 1 - Programacion 3" << endl << endl;

	// Impresión de Menú
	menu();

}