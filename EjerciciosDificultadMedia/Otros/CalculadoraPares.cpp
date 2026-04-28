#include <iostream>
using namespace std;

int main (){
    int numero1;

    cout <<" ingrese un numero: ";
    cin >> numero1;

    // Verificar si el número es par o impar utilizando el operador módulo
    if (numero1 % 2 == 0){
        cout << "Su numero es PAR";
        }
    else {
        cout << "Su numero es IMPAR";
    }    

    return 0;
}