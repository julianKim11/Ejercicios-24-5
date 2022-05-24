#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello World!\n";

	// 3) (If) Un programa que diga la paridad de un número introducido por el usuario.
	/*
	int numero;
	cout << "Ingrese un numero:";
	cin >> numero;
	if (numero % 2 == 0) {
		cout << "El numero ingresado es par.";
	}
	else {
		cout << "El numero ingresado es impar.";
	}
	*/

	/* 4)(Switch)Dada la nota de un examen que se califica del 1 al 10, indicar si aprobo, promociono o reprobó sabiendo que menos de 4 es reprobado, menos de 8 es aprobado y mas de 8 es promocionado. Extra, que la nota de examen sea introducida por el usuario y luego le diga el resultado.

	int nota;
	cout << "Ingrese la nota del examen:" << endl;
	cin >> nota;
	
	if (nota < 4) {
		nota = 1;
	} else if (nota <= 8 && nota >= 4) {
		nota = 2;
	} else {
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
	}*/

	/* 5)(For)En Street Fighter Chun Li pega la cantidad de patadas consecutivas que introdujo el usuario, cada patada pega un daño de 10, el contrincante va a bloquear 1 de cada 3 ataques
		a. Indicar cuantos ataques exitosos hubo(que no fueron cubiertos por el contrincante).
		b. Indicar cual fue el daño final
		c. En caso de una patada sea bloqueada indicar “Ataque bloqueado”.
		d. En todos los casos imprimir el daño realizado.

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
	*/

	/* 6)(For killer) En un tower defence una torreta puede disparar las siguientes municiones:
		- Balas de 55mm: con un rango de 0 a 200m y un daño de 50.
		- Morteros: con un rango de 400m a 1000m y un daño entre 100 y 500.

		Se van a producir 10 ataques en 10 momentos distintos
		· La cantidad de enemigos va a incrementar en 5 según el numero en cada ataque, quedando la cantidad de enemigo en: 5,10,15,20,25,30,35,40,45,50
		· Las enemigas contarán con una vida que va de 200 a 300 puntos.
		· El rango de distancia de cada enemigo varía entre 100m a 1200m.

		Sabiendo esto, resolver:
		a. Indicar cuando Inicia y cuándo finaliza un ataque
		b. Indicar cuántos enemigos fueron alcanzados por balas de 55mm en cada ataque.
		c. Indicar cuantos enemigos fueron alcanzados por morteros en cada ataque
		d. Indicar cuantos enemigos murieron en cada ataque
		e. Indicar cuantos enemigos sobrevivieron en cada ataque
		f. Al finalizar las 10 oleadas, indicar cuantos enemigos murieron en total.
		g. Al finalizar las 10 oleadas indicar, cuantas balas de 55m y morteros se dispararon
	


	int municion;
	cout << "Ingresar el tipo de municion que quiera usar: 1 = Balas de 55mm o 2 = Morteros.\n" << endl;
	int enemigos = 5;
	int total = 0;
	int balas55 = 10 * 50;
	int mortero = 10 * 250;

	for (int i = 1; i < 10; i++) {
		cout << "Ronda " << i << endl;
		for (int j = 0; j < enemigos; j++) {
			cout << "Seleccione el tipo de municion a utilizar: ";
			cin >> municion;
			if (municion == 1) {
				total = enemigos * 200;
				int restante = (total - balas55)%200;
				cout << restante;
			}
		}
	}
	*/




}