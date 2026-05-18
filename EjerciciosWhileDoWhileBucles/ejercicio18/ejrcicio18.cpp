#include <iostream>
using namespace std;

int main()
{
    int numero, numeroreal = 45, contador = 0;

    cout << "BIENVENIDO AL JUEGO DE ADIVINANZA :)" << endl;
    cout << "Intente adivinar el numero entre el 1-50" << endl;
    cout<<"Numero: ";
    cin >> numero;

    while (contador < 5)
    {
        if (numero == numeroreal)
        {
            cout << "-------------ADIVINASTE, FELICIDADES :)--------------";
            break;
        }

        else if (numero != numeroreal)
        {
            contador++;

            if (contador == 5)
            {
                cout << "LLEGASTE AL LIMITE DE INTENTOS ;(\n";
                break;
            }

            else if(numero<1||numero>50)
            {
                cout<<"ERROR INGRESE UN NUMERO ENTRE EL 1 Y 50"<<endl;
                cout << "TE QUEDAN " << 5 - contador << " INTENTOS" << endl;
                cout << "Porfavor intentelo de nuevo: ";
                cin >> numero;
            }

            else
            {
                cout << "NUMERO INCORRECTO TE QUEDAN " << 5 - contador << " INTENTOS" << endl;
                cout << "Porfavor intentelo de nuevo: ";
                cin >> numero;
            }
        }

        else{
            cout<<"DATOS INCORRECTOS";
            break;
        }
    }

    return 0;
}