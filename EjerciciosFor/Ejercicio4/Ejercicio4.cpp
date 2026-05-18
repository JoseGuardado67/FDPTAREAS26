#include<iostream>
using namespace std;

int main(){
    int N=0, mu=0;

    cout<<"Ingrese el numero que desea ver su tabla de multiplicar: ";
    cin>> N;

    for(int i = 1; i <=10 ; i++){
    mu = N *i;

    cout<< N << " x "<< i <<" = "<<mu <<endl;
    }


    return 0; 
}