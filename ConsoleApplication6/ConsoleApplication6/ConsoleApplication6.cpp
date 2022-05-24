
#include <iostream>

using namespace std;

int main()
{
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