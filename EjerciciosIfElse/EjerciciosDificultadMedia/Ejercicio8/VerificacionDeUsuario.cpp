#include <iostream>
using namespace std;

int main(){
    string usuario, contrasena;

    string usucorrecto = "admin123" ;
    string contracorrecta = "contrasenasegura";

    cout <<"Ingrese el usuario: "<<endl;
    cin>> usuario;
    
    cout <<"ingrese la contrasena: "<<endl;
    cin>> contrasena;

    if (usuario == usucorrecto && contrasena == contracorrecta){
        cout<<"Los datos son CORRECTOS.";
    }
    else {
        cout <<"Los datos son INCORRECTOS."; 
    }


    return 0;


}