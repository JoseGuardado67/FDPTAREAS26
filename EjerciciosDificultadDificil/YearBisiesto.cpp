#include <iostream>
using namespace std;

int main () {
    int ano;

    //pedir al usuario el año
    cout <<"Ingrese el ano que desee verificar: ";
    cin>> ano;

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
    cout << "Es bisiesto";
    }
    
    else {
    cout << "No es bisiesto";
    }

    return 0;
}