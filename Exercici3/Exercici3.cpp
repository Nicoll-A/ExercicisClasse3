#include <iostream>
using namespace std;

class Llum {
private:
    bool estado;
public:
    Llum() { //Creó el método constructor inicializado
        estado = false;
    }
    void encendreLlum() {
        estado = true;
    }
    void apagarLlum() {
        estado = false;
    }
    bool consultaEstat() {
        return estado;
    }
};

int main() {
    Llum llum1;
    llum1.encendreLlum();
    llum1.apagarLlum();
    bool estat = llum1.consultaEstat();
    if (estat) {
        cout << "La llum esta encesa" << endl;
    }
    else {
        cout << "La llum esta apagada" << endl;
    }
    return 0;
}