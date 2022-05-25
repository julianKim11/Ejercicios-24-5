#include <iostream>

using namespace std;

void menu() {

}

void ejercicio2() {
	cout << "Hola mundo\n";
}

void ejercicio3() {
	int numero;
	cout << "Ingrese un numero:";
	cin >> numero;
	if (numero % 2 == 0) {
		cout << "El numero ingresado es par.";
	}
	else {
		cout << "El numero ingresado es impar.";
	}
}

void ejercicio4() {
	int nota;
	cout << "Ingrese la nota del examen:" << endl;
	cin >> nota;

	if (nota < 4) {
		nota = 1;
	}
	else if (nota <= 8 && nota >= 4) {
		nota = 2;
	}
	else {
		nota = 3;
	}
	switch (nota)
	{
	case 1:
		cout << "Reprobado.";
		break;
	case 2:
		cout << "Aprobado.";
		break;
	case 3:
		cout << "Promocion.";
		break;
	default:
		cout << "Error";
		break;
	}
}

void ejercicio5() {
	int patada;
	int contadorPatadas = 0;
	cout << "Ingrese la cantidad de patadas consecutivas que realizo Chun Li:";
	cin >> patada;
	for (int i = 1; i <= patada; i++) {
		contadorPatadas++;
		if (i % 3 == 0) {
			contadorPatadas--;
			cout << "Ataque bloqueado.\n";
		}
		else {
			cout << "10 de danio.\n";
		}
	}
	cout << "Hubo " << contadorPatadas << " ataques exitosos." << endl;
	int danioTotal = contadorPatadas * 10;
	cout << "El danio total es de: " << danioTotal << endl;
}

void ejercicio6() {

}

void ejercicio7() {
	int enemigos = 0;
	cout << "Ingrese la cantidad de enemigos: ";
	cin >> enemigos;
	int total = 1;
	for (int i = 1; i <= enemigos; i++) {
		total *= i; // total = total * i;
	}
	cout << "La cantidad estimada de muertes es de: " << total << endl;
}

void ejercicio8() {
	char tablero[50][50];
	int filas = 50;
	int columnas = 50;
	char casillero;

	for (int i = 1; i <= filas; i++) {
		for (int j = 1; j <= columnas; j++) {
			cout << "Casillero " << i << "-" << j << ": ";
			cin >> casillero;
			if (casillero == 'O') {
				tablero[i][j] = casillero;
			}
			else if (casillero == 'T') {
				tablero[i][j] = casillero;
			}
			else if (casillero == '$') {
				tablero[i][j] = casillero;
			}
			else if (casillero == 'E') {
				tablero[i][j] = casillero;
			}
			else {
				tablero[i][j] = 'T';
			}
		}
	}

	for (int i = 1; i <= filas; i++) {
		for (int j = 1; j <= columnas; j++) {
			cout << "Casillero " << i << "-" << j << ": " << tablero[i][j] << "\n";
		}
	}
}

int main()
{
	int municion;
	int rondas = 10;
	int enemigos = 5;

	for (int i = 1; i <= rondas; i++) {
		cout << "Ronda " << i << "\n";
		for (int j = 0; j < enemigos; j++) {

		}
		enemigos + 5;
	}
}
