#include <iostream>
using namespace std;

int main (){
    double precio, descuento, precioFinal;

    //pedirle al usuario el precio del producto
    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    //pedirle al usuario el descuento en porcentaje
    cout << "Ingrese el descuento en porcentaje: ";
    cin >> descuento;

    //calcular el precio final
    precioFinal = precio - (precio * descuento / 100);

    //mostrar el precio final al usuario
    cout << "El precio final del producto es: " << precioFinal << endl;

    return 0;
}