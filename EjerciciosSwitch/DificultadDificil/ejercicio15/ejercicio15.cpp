#include <iostream>
using namespace std;

int main (){
    float salario=0, impuesto, salarioN;
    int categoria;

    cout<<"Bienvenido al calculador de impuestos\n";
    cout<<"Ingrese su salario bruto actual: \n";
    cin>>salario;

    if (salario < 300) {
        categoria = 1;
    } else if (salario <= 600) {
        categoria = 2;
    } else if (salario <= 1000) {
        categoria = 3;
    } else {
        categoria = 4;
    }

    switch (categoria){     
        case 1:
            impuesto = salario * 0.0;
            break;
        case 2:
            impuesto = salario * 0.10;
            break;
        case 3:
            impuesto = salario * 0.20;
            break;
        case 4:
            impuesto = salario * 0.30;
            break;
    }

    salarioN = salario - impuesto;

    cout << "Impuesto: " << impuesto << endl;
    cout << "Salario total: " << salarioN << endl;

    return 0;
}

