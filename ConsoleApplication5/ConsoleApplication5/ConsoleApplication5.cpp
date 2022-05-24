
#include <iostream>

using namespace std;

int main()
{
	//7
	int enemigos = 0;
	cout << "Ingrese la cantidad de enemigos: ";
	cin >> enemigos;
	int total = 1;
	for (int i = 1; i <= enemigos; i++) {
		total = total * i;

	}
	cout << "La cantidad estimada de muertes es de: " << total << endl;
}