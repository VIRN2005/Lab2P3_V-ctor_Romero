#include <iostream>
using namespace std;

// Métodos 2ndo Ejercicio
int Factorial(int n) {
	if (n == 0) { // Caso base
		return 1;
	}
	else { // Recursiva
		return n * Factorial(n - 1);
	}
}

void Triangulo(int n) {
	for (int row = 0; row < n; row++) {
		for (int column = 0; column <= row; column++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
}

int menu() {
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

		}
			  break;

		case 2: {
			cout << "- 2) Factoriales y figuras - \n";

			cout << ">> Ingrese el Numero del Factorial: ";
			int num;
			cin >> num;

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
	cout << "Victor I. Romero N. - 12211079" << endl
		<< "Lab 1 - Programacion 3" << endl << endl;

	menu();

}