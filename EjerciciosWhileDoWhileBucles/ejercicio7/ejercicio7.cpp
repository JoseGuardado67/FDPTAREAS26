#include <iostream>
using namespace std;

int main()
{
    int contador = 0;
    cout << "Ingrese un numero para iniciar el contador: ";
    cin >> contador;

   while (contador >= 0) {
        cout << "Contador en while: " << contador << endl;
        contador--;
    }
    return 0;
}