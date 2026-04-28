#include <iostream>
using namespace std;

int main (){
    double paquete;

    cout<<"Ingrese el peso de su paquete en kg: ";
    cin>> paquete;

    if (paquete <= 5){
        cout <<"Debe de pagar $5 por el envio";
    }

    else if (paquete >=6 && paquete <=10){
        cout<<"Debe de pagar $10 por el envio.";
    }

    else {
        cout<<"Debe de pagar $15";
    }

    return 0;
}