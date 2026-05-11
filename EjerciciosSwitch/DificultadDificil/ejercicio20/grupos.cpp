#include <iostream>
using namespace std;

int main (){
    char inicial;
    
    cout<<"Digite la inicial de su apellido: ";
    cin>>inicial;


    switch(inicial)
    {
        case 'A': case 'B': case'C': case'D': case'E': case'F': case'G': case'H': case'I': case'J': case'K': case'L': case'M':
        cout<<"Pertenece al grupo 1.";
        break;

        case'N': case'O': case'P': case'Q': case'R': case'S': case'T': case'U': case'V': case'W': case'X': case'Y': case'Z':
        cout<<"Pertenece al grupo 2.";
        break;

        default:
        cout<<"ERROR DIGITE LA INICIAL DE SU APELLIDO EN MAYUSCULAS";
        break;
    }

    return 0;
}