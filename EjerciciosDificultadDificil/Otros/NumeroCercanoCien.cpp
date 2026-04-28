#include <iostream>
using namespace std;

int main()
{
    int numero1, numero2;

    // pedir al usuario que ingrese los numeros
    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    if (abs(numero1 - 100) < abs(numero2 - 100))
    {
        cout << "el numero mas cercano a 100 es el PRIMER NUMERO";
    }

    else if(abs(numero1 - 100) > abs(numero2 - 100)) {
        cout << "el numero mas cercano a 100 es el SEGUNDO NUMERO";
    }

    else {
        cout << "ambos numeros estan a la misma distancia de 100";
    }


    return 0;
}