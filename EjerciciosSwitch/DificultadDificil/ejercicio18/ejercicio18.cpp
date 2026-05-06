#include <iostream>
using namespace std;

int main (){
    int P;
     float cm,plg,plgr;
     float metros,pies, piesr;
    float km,milla, millar;


    cout<<"+++++++| SELECCIONE UNA OPCION |++++++++++"<<endl;
    cout<<"1.- CM a PULGADAS.\n";
    cout<<"2.- METROS a PIES.\n";
    cout<<"3.- KILOMETROS a MILLAS.\n";
    cout<<"Consultar por: ";
    cin>>P;

    switch(P){
        case 1:
        cout<<"Ingrese CM: \n";
        cin>>cm;

        plgr= cm /2.54;
        cout<< cm <<" son "<< plgr <<" en pulgadas.";
        break;
        
        case 2:
        cout<<"Ingrese METROS: ";
        cin>>metros;

        piesr= metros * 3.281;
        cout<< metros <<" son "<< piesr <<" pies.";
        break;
        
        case 3:
        cout<<"Ingrese KILOMETROS: ";
        cin>>km;

         millar= km * 3.281;
        cout<< km <<" son "<< millar <<" millas.";
        break;

        default:
        cout<<"ERROR DATOS INCORRECTOS";
        break;
        
    }
return 0;

    }