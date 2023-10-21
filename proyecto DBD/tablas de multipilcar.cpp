#include <iostream>
#include <cmath>
using namespace std;

int main() {
 
    //  arreglo que tenga los números del 1 al 10.
    int numeros[10];
    for (int i = 0; i < 10; ++i) {
        numeros[i] = i + 1;
    }

    // Ingresar Nombre del usuario, número entero y Exponencial.
    string nombreUsuario;
    int numeroEntero, exponencial;
    cout << "Ingrese su nombre: ";
    cin >> nombreUsuario;
    cout << "Ingrese un numero entero: ";
    cin >> numeroEntero;
    cout << "Ingrese un exponente: ";
    cin >> exponencial;

    // Multiplicar el número entero 
    cout << "Multiplicacion del numero entero por los elementos del arreglo:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << numeroEntero << " x " << numeros[i] << " = " << numeroEntero * numeros[i] << endl;
    }

    // Calcular el valor del exponente al número entero ingresado 
    double resultadoExponencial = pow(numeroEntero, exponencial);
    cout << "Resultado de elevar " << numeroEntero << " a la potencia " << exponencial << " es: " << resultadoExponencial << endl;
    cout << numeroEntero << " a la potencia " << exponencial << " es: " << resultadoExponencial << endl;

    // matriz de tamaño del número entero y el exponencial ingresados.
    int matriz[20][20]; 
    cout << "Matriz de tamano " << numeroEntero << "x" << exponencial << " es:" << endl;
    for (int i = 0; i < numeroEntero; ++i) {
        for (int j = 0; j < exponencial; ++j) {
            matriz[i][j] = i * j; 
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
