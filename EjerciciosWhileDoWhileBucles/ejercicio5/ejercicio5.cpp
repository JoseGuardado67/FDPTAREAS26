#include <iostream>
using namespace std;

int main() {
    int N, suma = 0, contador = 1;

    cout << "Ingrese un numero: ";
    cin >> N;

    //verificar si el contador es menor o igual al numero que ingreso el usuario
    while (contador <= N) {

    //verificar si es un numero par
        if (contador % 2 == 0) {
            suma= suma + contador;
        }
    
        contador++;
    }

    cout << "La suma de los numeros pares es: " << suma;

    return 0;
}