#include <iostream>

int main() {
    const int filas = 3;
    const int columnas = 4;
    int matriz[filas][columnas];

    // Leer elementos de la matriz
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << "Ingrese el elemento en la fila " << i << " y columna " << j << ": ";
            std::cin >> matriz[i][j];
        }
    }

    // Imprimir la matriz
    std::cout << "Matriz ingresada:" << std::endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
