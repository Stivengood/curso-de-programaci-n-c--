/*Nombre:Stiven Jami
Titulo:Reparto de horas en semanas, días y horas
Enunciado:Escribe un algoritmo que reciba un número entero de horas totales (un valor no
negativo). El algoritmo debe convertir esa cantidad de horas a semanas, días y horas
sobrantes.
Entrada/Proceso/Salida*/
#include <iostream>
using namespace std;
int main()
{
    float horas, semanas, dias, horasF;
    do
    {
        cout<<"Ingrese numero de horas =";
        cin>> horas;
        if (horas<0)
        {
            cout<<"Error:Numero de horas ingresada invalida"<<endl;
            cout<<"El numero de horas tiene que ser positivo"<<endl;
        }
    } while (horas<0);
    do
    {
        cout<<"Ingrese numero de horas para saber semanas restantes =";
        cin>> horas;
        if (horas>168)
        {
            cout<<"Error:Numero de horas ingresada invalida"<<endl;
            cout<<"El numero de horas tiene que ser menor a 168"<<endl;
        }
        if (horas<0)
        {
            cout<<"El numero de horas tiene que ser positivo"<<endl;
        }
    } while (horas>168 || horas<0);
    do
    {
        cout<<"Ingrese el numero de horas para saber dias restantes =";
        cin>> horas;
        if (horas>168)
        {
            cout<<"Error:Numero de horas ingresada invalida"<<endl;
            cout<<"El numero de horas tiene que ser menor ha 168"<<endl;
        }
        if (horas<0)
        {
            cout<<"El numero de horas tiene que ser positivo"<<endl;
        }
    } while (horas>168 || horas<0);
    do
    {
        cout<<"Ingrese el numero de horas para saber horas restantes =";
        cin>> horas;
        if (horas>168)
        {
            cout<<"Error:Numero de horas ingresada invalida"<<endl;
            cout<<"El numero de horas tiene que ser menor ha 168"<<endl;
        }
        if (horas<0)
        {
            cout<<"El numero de horas tiene que ser positivo"<<endl;
        }
    } while (horas>168 || horas<0);
    semanas=horas/168;
    dias=horas/24;
    horasF=168-horas;
    cout<<"Las semanas faltantes son de ="<<semanas<<endl;
    cout<<"Los dias faltantes son de ="<<dias<<endl;
    cout<<"Las horas faltantes son de ="<<horasF<<endl;
    cout<<"Pulse enter pasa salir:";
    cin.ignore();
    cin.get();
    return 0;
    
    
    
}