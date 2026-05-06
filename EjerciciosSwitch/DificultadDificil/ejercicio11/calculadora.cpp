#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float num1, num2, resultado;
    int op;

    // Solicitar al usuario que ingrese dos números
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Seleccione una operacion:" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modular" << endl;
    cout <<"6. Exponenciacion"<<endl;
    cout << "Opcion: ";
    cin >> op;

    switch (op)
    {
    case 1:
        resultado = num1 + num2;
        cout << "El resultado de la suma es: " << resultado << endl;
        break;

    case 2: 
        resultado = num1 - num2;
        cout << "El resultado de la resta es: " << resultado << endl;
        break;

    case 3:
        resultado = num1 * num2;
        cout << "El resultado de la multiplicacion es: " << resultado << endl;
        break;
    case 4:
        if (num2 != 0)
        {
            resultado = num1 / num2;
            cout << "El resultado de la division es: " << resultado << endl;
        }
        else
        {
            cout << "Error: Division por cero no permitida." << endl;
            return 1; 
        }
        break;

    case 5: 
        resultado=(int)num1 % (int)num2;
        cout << "El resultado del modulo es: " << resultado << endl;
        return 0;
        break;

    case 6:
        resultado= pow(num1, num2);
        cout << "El resultado de la exponenciacion es: " << resultado << endl;

    default:
        cout << "ERROR, elija una opción del 1 al 5." << endl;
        return 1; 
    }



    return 0;
}    