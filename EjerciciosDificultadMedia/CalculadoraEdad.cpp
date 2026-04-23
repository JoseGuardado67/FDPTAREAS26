#include <iostream>
using namespace std;

int main(){
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18){
        cout <<"Puede pasar";
    }
    else {
        cout << "NO puede pasar";
        
    }

    return 0;
}