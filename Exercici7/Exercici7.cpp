#include <iostream>
#include <string>
using namespace std;

class Reserva
{
private:
    string nomClient;
    int nits;
    float preu;
    bool estat;

public:

    Reserva(string nom, int nomNits, float preuCobrat) {    //Creó el meéodo constructor
        nomClient = nom;
        nits = nomNits;
        preu = preuCobrat;
        estat = true;
    }

    void consultarNom() {
        cout << "La reserva esta a nombre de: "
            << nomClient
            << endl;
    }

    void canviarNits(int noves) {
        nits = noves;
    }

    void calcularPreu() {
        float preuTotal = nits * preu;
        cout << "Precio total = "
            << preuTotal
            << endl;
    }

    void cancelarReserva() {
        estat = false;
    }

    void consultarReserva() {
        if (estat) {
            cout << "Estado: Reserva activa"
                << endl;
        }
        else {
            cout << "Estado: Reserva cancelada"
                << endl;
        }
    }

    void modificarReserva() {
        if (!estat) {
            cout << "Aviso: No puedes modificar los datos de la reserva porque esta cancelada"
                << endl;
        }
    }

};

int main()
{
    Reserva client("Nicoll", 2, 39.99);

    client.consultarNom();
    client.canviarNits(5);
    client.calcularPreu();
    client.cancelarReserva();
    client.consultarReserva();
    client.modificarReserva();

    return 0;
}