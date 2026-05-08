/*Nombre:Stiven Jami
Titulo:Descuento por edad
Enunciado:Escribe un algoritmo que reciba la edad de una persona y determine el precio a pagar
Entrada/Proceso/Salida
*/
#include <iostream>
using namespace std;
int main()
{
    float edad, descuento, precioFinal;
    cout<<"Ingrese edad:";
    cin>>edad;
    if (edad>18) 
    {
        precioFinal=5-0;
        cout<<"Usted debe pagar $"<<precioFinal<< endl;
    } else {
        descuento=5-2.50;
        cout<<"Usted debe pagar $"<<descuento<< endl;
    } 
    cout<<"precione enter para salir";
    cin.ignore();
    cin.get();
    return 0;
}
