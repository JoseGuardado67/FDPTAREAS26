#include<iostream>
using namespace std;

int main(){
    int numero=0, pruebanumero;

    
    cout<<"ingrese un numero: ";
    cin>>numero;
    
    while (numero<1 || numero>10){
        cout<<"ERROR FUERA DE RANGO\n";
        cout<<"Intentelo de nuevo: ";
        cin>>numero;
    }

    if(numero>=1 && numero<=10){
        cout<<"Numero dentro del rango";
    }

    else{
        cout<<"ERROR DIGITE UN NUMERO";
    }

    return 0;
}