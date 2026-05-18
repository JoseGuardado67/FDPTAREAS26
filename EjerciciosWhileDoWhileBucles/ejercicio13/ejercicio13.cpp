#include<iostream>
using namespace std;

int main(){
    int numero=0, numero2=1, N, total, contador=0  ;

    cout<<"Ingrese la cantidad que desea ver de la serie Fibonacci: ";
    cin>>N;

    while(contador<=N){

        cout<<numero<<" ";

        total = numero + numero2;
        numero = numero2;
        numero2 = total;

        contador++;

    }


    return 0;
}