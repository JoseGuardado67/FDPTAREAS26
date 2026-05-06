#include <iostream>
using namespace std;

int main (){
    int edad, tipo;

    cout<<"Estimado usuario, ingrese su edad: ";
    cin>>edad;

    switch (edad) {
        // G 
        case 0: case 1: case 2: case 3: case 4:
        case 5: case 6: case 7: case 8: case 9:
            cout << "Se le recomienda ver peliculas Categoria G" << endl;
            break;

        // PG 
        case 10: case 11: case 12:
            cout << "Se le recomienda ver peliculas Categoria PG" << endl;
            break;

        // PG-13
        case 13: case 14: case 15: case 16:
            cout << "Se le recomienda ver peliculas Categoria PG-13" << endl;
            break;

        // R 
        default:
            cout << "Se le recomienda ver peliculas Categoria R" << endl;
    }

    return 0;
}