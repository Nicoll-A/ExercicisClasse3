#include <iostream>

using namespace std;

class Termometre {
private:
	float temperatura;

public:
	Termometre() { // Creó el método constructor inicializado
		temperatura = 37.6;
	}

	void consultarT() {
		cout << "La temperatura es: " << temperatura << endl;
	}

	void modificarT(float temp) {
		if (temp > -50 && temp < 60) {
			temperatura = temp;
			cout << "La nueva temperatura es: " << temperatura << endl;
		}
	}
};

int main() {
	Termometre term1;
	float novaT = 34.4;

	term1.consultarT();
	term1.modificarT(novaT);

	return 0;
}