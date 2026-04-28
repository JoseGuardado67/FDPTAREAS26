#include<iostream>
using namespace std;

int main(){
    int consumo;

    cout<<"ingrese su consumo de energia en kw/h: ";
    cin >> consumo;

    if (consumo < 100){
        cout <<"Usted tiene una tarifa BAJA";
    }

    else if (consumo >=100 && consumo <=200){
        cout<<"Usted tiene una tarifa MEDIA.";
    }

    else {
        cout<<"Usted tiene una tarifa ALTA";
    }

    return 0;
}