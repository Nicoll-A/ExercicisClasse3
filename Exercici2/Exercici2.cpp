#include <iostream>
using namespace std;

class Rectangle
{
private:
    float amplada;
    float alcada;

public:

    Rectangle(float amplada1, float alcada1) {    //Creó el método constructor
        amplada = amplada1;
        alcada = alcada1;
    }

    void calcularArea() {
        float area = amplada * alcada;
        cout << "Area: "
            << area
            << endl;
    }

    void calcularPerimetro() {
        float perimetro = (2 * amplada) + (2 * alcada);
        cout << "Perimetro: "
            << perimetro
            << endl;
    }

    void mostrarDimensions() {
        cout << "Amplada: "
            << amplada
            << endl;
        cout << "Alcada: "
            << alcada
            << endl;
    }

};

int main()
{
    Rectangle rectangle1(27, 20);

    rectangle1.calcularArea();
    rectangle1.calcularPerimetro();
    rectangle1.mostrarDimensions();

    return 0;
}