maxf = 3
maxc = 5
a = [[0.0] * maxc for _ in range(maxf)]

# Leer array
for f in range(maxf):
    for c in range(maxc):
        a[f][c] = float(input())

# Escribir el array
for f in range(maxf):
    for c in range(maxc):
        print(a[f][c], end=" ")
    print()


#include <cstdlib>
#include <iostream>
#define maxf 3
#define maxc 5
using namespace std;

int main(int argc, char *argv[]) {
    float a[maxf][maxc];
    int f, c;

    // Leer el array
    for (f = 0; f < maxf; f++) {
        for (c = 0; c < maxc; c++) {
            cin >> a[f][c];
        }
    }

    // Escribir el array
    for (f = 0; f < maxf; f++) {
        for (c = 0; c < maxc; c++) {
            cout << a[f][c] << " ";
        }
        cout << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}