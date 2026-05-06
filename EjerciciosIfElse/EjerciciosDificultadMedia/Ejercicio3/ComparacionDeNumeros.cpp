#include <iostream>
using namespace std;

int main()
{
    int numero1, numero2;

    // pedir al usuario que ingrese dos numeros
    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    // decirle al usuario cual es el mayor o menor de los dos numeros
    if (numero1 > numero2){
        cout << "El primer numero es MAYOR y el segundo es MENOR";
    }
    else if (numero1 < numero2){
        cout << "El primer numero es MENOR y el segundo es MAYOR";
    }
    else{
        cout << "Ambos numeros son IGUALES";
    }

    return 0;
}
