#include <iostream>
using namespace std;

int main()
{
    float peso;
    int cobro, billetera = 500;

    cout << "Ingrese el peso de su paquete en kg: " << endl;
    cin >> peso;

    if (peso > 0 && peso <= 5)
    {
        cobro = billetera - 5;
        cout << "Su cobro de $5 se realizo con exito, su nuevo saldo es de: " << cobro << endl;
    }

    else if (peso >= 6 && peso <= 10)
    {
        cobro = billetera - 10;
        cout << "Su cobro de $10 se realizo con exito, su nuevo saldo es de: " << cobro << endl;
    }

    else if (peso > 10)
    {
        cobro = billetera - 15;
        cout << "Su cobro de $15 se realizo con exito, su nuevo saldo es de: " << cobro << endl;
    }

    else
    {
        cout << "Datos incorrectos.";
    }

    return 0;
}