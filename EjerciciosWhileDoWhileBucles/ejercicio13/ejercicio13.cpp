#include<iostream>
using namespace std;

int main(){
    int numero=0, total, numero2=1, N, contador=0  ;

    cout<<"Ingrese la cantidad que desea ver de la seria Fibonacci: ";
    cin>>N;

    while(contador<N){
        cout << numero << " ";

        total = numero + numero2;
        numero = numero2;
        numero2 = total;

        contador++;

    }


    return 0;
}