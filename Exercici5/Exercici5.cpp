#include <iostream>
using namespace std;

class Jugador
{
private:
    string nom;
    int punts;
    int vides;

public:

    Jugador(string nomDonat) {    //Creo el método constructor inicializando los puntos y las vidas
        punts = 0;
        vides = 1;
    }

    void afegirPunts(int ptsNous) {
        punts = punts + ptsNous;
    }

    void perdreVida() {
        if (vides > 0) {
            vides = vides - 1;
        }
    }

    void consultarPunts() {
        cout << "Punts = "
            << punts
            << endl;
    }

    void consultarVides() {
        cout << "Vides = "
            << vides
            << endl;
    }

    bool consultarEstat() {  //Saber si el jugador esta viu
        if (vides > 0) {
            return true;
        }
        return false;
    }

};

int main()
{
    Jugador player1("Nicoll");
    int puntsNous = 306;

    player1.afegirPunts(puntsNous);
    player1.perdreVida();
    player1.consultarPunts();
    player1.consultarVides();
    if (!player1.consultarEstat()) {
        cout << "Esta mort"
            << endl;
    }
    else {
        cout << "Esta viu"
            << endl;
    }

    return 0;
}