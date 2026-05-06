#include <iostream>
using namespace std;

int main (){
    int V;
    float USD, conv;

    cout<<"Seleccione la conversion que desea realizar: \n";
    cout << "1. USD a EUR\n";
    cout << "2. USD a JPY\n";
    cout<< "3 = USD a GBP\n";
    cin >> V;
    
    switch(V){
        case 1:
        cout<<"Ingrese la cantidad en USD: "<<endl;
        cin>> USD;

        conv = USD * 0.92;
        cout<<"Ud tiene "<< conv <<" EUR";
        break;

        case 2:
        cout<<"Ingrese la cantidad en USD: "<<endl;
        cin>> USD;

        conv = USD * 150;
        cout<<"Ud tiene "<< conv <<" Yenes Japoneses";
        break;

        case 3:
        cout<<"Ingrese la cantidad en USD: "<<endl;
        cin>> USD;

       conv = USD * 0.74;
        cout<<"Ud tiene "<< conv <<" Libra Esterlina";
        break;

        default:
        cout << "datos incorrectos";
        return 1; 
    

    }
return 0;
}