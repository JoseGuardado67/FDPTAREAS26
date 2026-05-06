#include <iostream>
using namespace std;

int main(){
    int dia;

    cout<<"++++++++++++++++++| SELECCIONE EL DIA |+++++++++++++++++++++++\n";
    cout<<"1. LUNES\n";
    cout<<"2. MARTES\n";
    cout<<"3. MIERCOLES\n";
    cout<<"4. JUEVES\n";
    cout<<"5. VIERNES\n";
    cout<<"6. SABADO\n";
    cout<<"7. DOMINGO\n";
    cout<<"Consultar por: ";
    cin>>dia;

    switch(dia){
        case 1:
        cout<<"Horario dia LUNES:\n";
        cout<<"Elementos para el estudio de la CC y la tecnologia..................9:00 a.m -11:00 a.m\n";
        cout<<"Fundamentos De Programacion.......................11:00 a.m -1:00 p.m \n";
        cout<<"Laboratorio Fundamentos de Programacion................1:30 p.m -3:30 p.m";
        break;

        case 2:
        cout<<"Horario dia MARTES:\n";
        cout<<"Precalculo..............................9:00 a.m -11:00 a.m\n";
        cout<<"Matematica Discreta.......................11:00 a.m -1:00 p.m \n";
        break;

        case 3:
        cout<<"Horario dia MIERCOLES:\n";
        cout<<"Elementos para el estudio de la CC y la tecnologia..................9:00 a.m -11:00 a.m\n";
        cout<<"Fundamentos De Programacion.......................11:00 a.m -1:00 p.m \n";
        break;

        case 4:
        cout<<"Horario dia JUEVES:\n";
        cout<<"Precalculo..............................9:00 a.m -11:00 a.m\n";
        cout<<"Matematica Discreta.......................11:00 a.m -1:00 p.m \n";
        break;

        case 5:
        cout<<"Horario dia VIERNES:\n";
        cout<<"Precalculo..............................10:00 a.m -11:00 a.m\n";
        break;

        case 6:
        cout<<"Dia libre";
        break;

        case 7:
        cout<<"Dia libre";
        break;

        default:
        cout<<"ERROR DATOS INCORRECTOS";
        break;
    
    }

    return 0;
}