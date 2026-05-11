#include <iostream>
using namespace std;

int main(){
    int numero, suma, total=0;

    while(numero!=0){
        cout<<"Ingrese numero: ";
        cin>>numero;
    
        total= total + numero;

        cout<<"La suma actual es: "<< total <<endl;
    }

    cout<<"La suma total de los numeros es: "<<total;


    return 0;
}