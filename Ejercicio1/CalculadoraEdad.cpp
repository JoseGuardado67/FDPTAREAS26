#include <iostream>
using namespace std;

int main(){
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18){
        cout <<"Usted es MAYOR de edad";
    }
    else {
        cout << "Usted es MENOR de edad";
        
    }

    return 0;
}