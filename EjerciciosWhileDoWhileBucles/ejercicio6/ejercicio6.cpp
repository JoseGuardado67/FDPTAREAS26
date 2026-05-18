#include <iostream>
using namespace std;

int main() {
    string contra, contra2;
    contra= "fernanfloo";

    cout<<"ingrese la contrasena: ";
    cin>>contra2;

    while(contra!=contra2){
        cout<<"---------------------ACCESO DENEGADO------------------"<<endl;
        cout<<"CONTRASENA INCORRECTA, INTENTELO DE NUEVO: ";
        cin>>contra2;
    }

    if(contra==contra2)
    cout<<"++++++++++++++++++++++++ACCESO CONCEDIDO+++++++++++++++++++++++++++++";


    return 0;

}