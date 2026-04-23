#include<iostream>
using namespace std;

int main(){
    double velocidad;

    //pedir al ususario la velocidad
    cout <<"ingrese la velocidad en km/h: ";
    cin >> velocidad;

    if (velocidad > 80.0){
        cout <<"Tiene una multa MAYOR";
    }

    else if (velocidad < 60.0){
        cout <<"Usted NO tiene multa";
    }

    else if (velocidad > 60.0){
        cout <<"Tiene una multa LEVE";
    }

    return 0;
}