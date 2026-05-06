#include <iostream>
using namespace std;

int main (){
    int op, bille=50.00;
    float billetotal;

    cout<<"Seleccione el tipo de transporte que desea: \n";
    cout<<"1.-BUS\n";
    cout<<"2.-METRO\n";
    cout<<"3.-TAXI\n";
    cin>>op;

    switch (op){
        case 1: 
            cout<<"El costo estimado del viaje en BUS es de $0.30\n";
            billetotal=bille-0.30;
            cout<<"Saldo restante: "<<billetotal;
            break;

        case 2:
            cout<<"El costo estimado del viaje en METRO es de $1.50\n";
            billetotal=bille-1.00;
            cout<<"Saldo restante: "<<billetotal;
            break;
        
        case 3:
            cout<<"El costo estimado del viaje en TAXI de $3.50\n";
            billetotal=bille-3.50;
            cout<<"Saldo restante: "<<billetotal;
        
        break;
    
    default:
        cout<<"ERROR por favor seleccione una de las tres opciones";
        break;
    }

    

    return 0;

}