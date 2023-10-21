#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    cout << "aves" << endl;

    vector<string> aves;
    aves.push_back("flamenco");
    aves.push_back("Cuervo");
    aves.push_back("guacamaya");
    aves.push_back("pinguino");
    aves.push_back("quetzal");
    aves.push_back("buho");

    cout << "Ingrese los valores desde teclado:" << endl;

    for (int i = 0; i < 5; i++) {
        string valor;
        cout << "Valor " << i + 1 << ": ";
        cin >> valor;
        aves.push_back(valor); // Agrega los valores ingresados al final del vector
    }

    cout << "Valores finales del vector:" << endl;
    for (int i = 0; i < aves.size(); i++) {
        cout << aves[i] << endl;
    }

    return 0;
}
