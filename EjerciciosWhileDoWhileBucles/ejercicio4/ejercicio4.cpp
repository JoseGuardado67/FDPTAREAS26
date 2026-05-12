#include <iostream>
using namespace std;

int main()
{
    int contador, num1, num2, op = 0;
    float resultado;

    while (op!=3)
    {
        cout << "-------------------seleccione una opcion-------------------" << endl;
        cout << "1.-Suma De Dos Numeros.\n";
        cout << "2.-Resta de Dos Numeros.\n";
        cout << "3.-SALIR.\n";
        cout << "Opcion: ";
        cin >> op;

        switch (op)
        {
        case 1:
            cout << "Ingrese el primer numero: \n";
            cin >> num1;
            cout << "Ingrese el segundo numero \n";
            cin >> num2;
            resultado = num1 + num2;
            cout << "----->El resultado de la suma es: " << resultado << endl;
            break;

        case 2:
            cout << "Ingrese el primer numero: \n";
            cin >> num1;
            cout << "Ingrese el segundo numero \n";
            cin >> num2;
            resultado = num1 - num2;
            cout << "----->El resultado de la resta es: " << resultado << endl;
            break;

        case 3:
            cout << "Gracias por usarme <3" << endl;
            break;

        default:
            cout << "ERROR OPCION INCORRECTA" << endl;
            break;
        }


    }

    return 0;
}