#include <iostream>
using namespace std;

int main(){
    double nota;

    // Solicitar al usuario que ingrese su nota
    cout << "Ingrese su nota: ";
    cin >> nota;

    // Verificar si la nota es aprobatoria (6 o más) o no
    if (nota >= 6){
        cout <<"El usuario ha aprobado";
    }
    else {
        cout << "El usuario ha reprobado";
    }

    return 0;
}