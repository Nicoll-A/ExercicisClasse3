#include <iostream>
#include <string>
using namespace std;

class Persona
{
private:
	string nombre;
	int edad;

public:

	Persona(string nombreIngresado, int edadIngresada) { //Creó el método constructor
		nombre = nombreIngresado;
		edad = edadIngresada;
	}

	void mostrarDatos() {
		cout << "Nombre: "
			<< nombre
			<< endl;
		cout << "Edad: "
			<< edad
			<< endl;
	}

	bool comprobarEdad() {
		if (edad >= 18)
		{
			return true;
		}

		return false;
	}

};

int main()
{
	Persona persona1("Nicoll", 20);

	persona1.mostrarDatos();

	if (persona1.comprobarEdad()) {
		cout << "Eres mayor de edad" << endl;
	}
	else {
		cout << "No eres mayor de edad" << endl;
	}

	return 0;
}