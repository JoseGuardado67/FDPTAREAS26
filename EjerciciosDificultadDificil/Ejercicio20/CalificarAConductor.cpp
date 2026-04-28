#include<iostream>
using namespace std;

int main (){
    int edad, infracciones, experiencia;

    cout<<"Cuantos anos tienes?: ";
    cin>>edad;

    cout<<"Cuantas infraciones ha tenido?: ";
    cin>> infracciones;

    cout<<"Cuantos anos de experiencia tienes conduciendo?: ";
    cin>> experiencia;

    if (edad <18){
        cout<<"NO APTO PARA CONDUCIR"<<endl;
    }

    else if (infracciones >= 5){
        cout<<"TIENE MUCHAS INFRACCIONES, NO APTO PARA CONDUCIR"<<endl;
    }

    else if (experiencia >= 5 && infracciones <=1) {
        cout << "Conductor excelente." << endl;
    }

    else if (experiencia >= 2 && infracciones <= 2) {
        cout << "Conductor aceptable." << endl;
    }

    else{
        cout <<"Conductor intermedio";
    }

    return 0;
}