#include <iostream>
using namespace std;

int main(){
    string contrasena, confirmacion;

    //pedirle al usuario que ingrese su contrasena
    cout <<"Ingrese su contrasena: ";
    cin >> contrasena;

    cout <<"Confirme la contrasena: ";
    cin >> confirmacion;

    if (contrasena == confirmacion){
        cout <<"Su contrasena es VALIDA";
    }

    else {
        cout <<"Su contrasena NO coincide";
    }

    return 0;
}