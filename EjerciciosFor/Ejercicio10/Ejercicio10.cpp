#include<iostream>
using namespace std;

int main(){
    int N, numero= 0, numero2=1, total=0;

    cout<<"Ingrese la cantidaque desea ver de la serie Fibonacci: ";
    cin>>N;

    for(int i = 0; i <=N; i++){
    cout<<numero<<" ";

        total = numero + numero2;
        numero = numero2;
        numero2 = total;

    }


    return 0;
}
