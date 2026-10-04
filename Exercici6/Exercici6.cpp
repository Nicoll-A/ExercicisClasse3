#include <iostream>
using namespace std;

class Producte
{
private:
    string nom;
    float preu;
    int estoc;

public:

    Producte(string nomDonat, float preuDonat, int nombreDonat) {    //Creó el método constructor
        nom = nomDonat;
        preu = preuDonat;
        estoc = nombreDonat;
    }

    void consultarPreu() {
        cout << "Preu = "
            << preu
            << endl;
    }

    void canviarPreu(float nouPreu) {
        preu = nouPreu;
        cout << "El nou preu es: "
            << preu
            << endl;
    }

    void afegirUnitat(int quantitat) {
        cout << "En estoc: "
            << estoc
            << endl;
        estoc = estoc + quantitat;
        cout << "Estoc actualizat: "
            << estoc
            << endl;
    }

    void vendreUnitat() {
        if (estoc > 0) {
            estoc = estoc - 1;
        }
    }

};

int main()
{
    Producte producte1("Kit-kat", 1.00, 7);
    float nouPreu = 1.50;
    int quantitat = 4;

    producte1.consultarPreu();
    producte1.canviarPreu(nouPreu);
    producte1.afegirUnitat(quantitat);
    producte1.vendreUnitat();

    return 0;
}