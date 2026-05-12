#include <iostream>
using namespace std;

int main() {
    int N, suma = 0, contador = 1;

    cout << "Ingrese un numero PAR: ";
    cin >> N;

    while (contador <= N) {

        if (contador % 2 == 0) {
            suma= suma + contador;
        }

        contador++;
    }

    cout << "La suma de los numeros pares es: " << suma;

    return 0;
}