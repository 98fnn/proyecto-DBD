#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    cout << "lista de animales" << endl;

    vector<string> animales ;
    animales.push_back("Leon");
    animales.push_back("Elefante");
    animales.push_back("Cebra");
    animales.push_back("Jirafa");

    cout << "Ingrese 4 valores :" << endl;

    for (int i = 0; i < 4; i++) {
        string valor;
        cout << "Valor " << i + 1 << ": ";
        cin >> valor;
        animales.push_back(valor); // Agrega los valores ingresados al final 
    }

    cout << "Valores finales:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << animales[i] << endl;
    }

    return 0;
}