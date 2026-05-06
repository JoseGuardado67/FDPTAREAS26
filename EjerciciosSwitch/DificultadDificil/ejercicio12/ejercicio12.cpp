#include <iostream>
using namespace std;

int main() {
    int estrellas;

    cout << "Ingrese el puntaje del jugador (1 a 5 estrellas): ";
    cin >> estrellas;

    switch (estrellas) {
        case 1:
            cout << "Muy mal desempeno.";
            break;

        case 2:
            cout << "Desempeno bajo.";
            break;

        case 3:
            cout << "Desempeno regular.";
            break;

        case 4:
            cout << "Buen desempeno.";
            break;

        case 5:
            cout << "¡Excelente desempeno!";
            break;

        default:
            cout << "ERROR PUNTAJE NO VALIDO";
    }

    return 0;
}