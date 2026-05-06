#include <iostream>
using namespace std;

int main (){
     float lado1, lado2, lado3;
     int tipo;

    cout<<"Ingrese el primer lado de su triangulo: ";
    cin >> lado1;
    
    cout<<"Ingrese el segundo lado de su triangulo: ";
    cin >> lado2;
    cout<<"Ingrese el tercer lado de su triangulo: ";
    cin >> lado3;

    if(lado1 == lado2 && lado2==lado3 && lado3==lado1){
    tipo = 1;
        }

    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3 ){
        tipo=2;
    }
    
    else{
        tipo = 3;
    }

    switch(tipo){
        case 1:
        cout<<"Su triangulo es equilatero.\n";
        break;

        case 2:
        cout<<"Su triangulo es isoceles.\n";
        break;

        case 3:
        cout<<"Su triangulo es escaleno.\n";
        break;

        default:{
            cout<<"Datos incorrectos\n";
            break;
        }
        
    }

    return 0;
}