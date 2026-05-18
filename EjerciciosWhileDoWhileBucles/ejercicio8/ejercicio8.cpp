#include <iostream>
using namespace std;

int main(){
    float nota= 0, total= 0;
    int contador=0;


    do{
    cout<<"Ingrese su nota: ";
    cin>>nota;

    if (nota>0){
    total= total + nota;
    contador ++;

    }

} while(nota>0);

    if(nota<0){
        float promedio= total/contador;
        cout<<"El promedio es: "<<promedio<<endl;
    }
    else{
        cout<<"DATOS INCORRECTOS";
    }



    return 0;
} 