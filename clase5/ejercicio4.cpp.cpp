/*Nombre:Stiven Jami
Titulo:Nota final con ponderacion
Enunciado:Escribe un algoritmo que reciba tres calificaciones: Parcial 1, Parcial 2 y Proyecto.
Con esos valores, debe calcular la nota final usando ponderaciones.
Entrada/Proceso/Salida*/
#include <iostream>
using namespace std;
int main()
{
    float np1, np2, np, nf;
    cout<<"Recuerde la calificacion es sobre 20"<< endl;
    do
    {
        cout<<"Ingrese nota del parcial 1 =";
        cin>> np1;
        if (np1<0 || np1>20)
        {
            cout<<"Error:nota ingresada fuera del rango requerido"<< endl;
            cout<<"Ingrese nuevamente su nota" <<endl;
        }
    } while (np1<0 || np1>20);
    do
    {
        cout<<"Ingrese su nota del parcial 2 =";
        cin>> np2;
        if (np2<0 || np2>20)
        {
            cout<<"Error:nota ingresada fuera del rango requerido"<<endl;
            cout<<"Ingrese nuevamente su nota" <<endl;
        }
    } while (np2<0 || np2>20);
    do
    {
        cout<<"Ingrese su nota del proyecto =";
        cin>> np;
        if (np<0 || np>20)
        {
            cout<<"Error:nota ingresada fuera del rango requerido"<< endl;
            cout<<"Ingrese nuevamente su nota"<< endl;
        }
    } while (np<0 || np>20);
    nf=(np1*0.30)+(np2*0.30)+(np*0.40);
    cout<<"Su nota final es de ="<<nf<< endl;
    cout<<"presione enter para salir:";
    cin.ignore();
    cin.get();
    return 0;
}