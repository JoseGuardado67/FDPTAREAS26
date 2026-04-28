#include<iostream>
using namespace std;

int main(){
    int edad;

    cout <<"Ingrese su edad: ";
    cin >> edad;

    if (edad < 5){
        cout <<"Usted entra GRATIS";
    }

    else if (edad >=5 && edad <=12){
        cout<<"Usted PAGA $5 para entrar.";
    }

    else {
        cout<<"Usted debe de pagar $10";
    }

    return 0;
    }