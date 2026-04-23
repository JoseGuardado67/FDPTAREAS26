#include <iostream>
using namespace  std;

int main(){
    string usuario, contrasena, usuarioprueba, contrasenaprueba;
    int contador;

    contador = 0;
    usuario = "admin123";
    contrasena = "contrasenasegura67";

    while(contador < 3) {

    //pedir al ususario sus datos
    cout <<"Ingrese su usuario: ";
    cin >> usuarioprueba;

    cout <<"Ingrese la contrasena: ";
    cin >> contrasenaprueba;

    if (usuario == usuarioprueba && contrasena == contrasenaprueba){
        cout <<"El usuario y la contrasena COINCIDEN";
        break;
    }
    
    
    else {
        contador ++;
        cout <<"DATOS INCORRECTOS, te quedan " << 3 - contador << " intentos" << endl;
    }

}

if (contador == 3){
        cout <<"LLEGASTE AL LIMITE DE INTENTOS." << endl;
}

return 0;
}