/*Nombre:Stiven Jami
Titulo:Area y perimetro
Enunciado:Escribe un algoritmo que reciba la base y la altura de un rectángulo.
Entrada/Proceso/Salida*/
#include <iostream>
using namespace std;
int main()
{
    int base, altura, area, perimetro;
    cout<< "Ingrese base:";
    cin>> base;
    cout<< "Ingrese altura:";
    cin>> altura;
    if (base == altura)
    {
        cout<< "Error: la base y altura son iguales, esto es un cuadrado."<<endl;
    } else {
        area=base*altura;
        perimetro=base+base+altura+altura;
        cout<<"El area del rectangulo es=" <<area<< endl;
        cout<<"El perimetro del rectangulo es =" <<perimetro<< endl;
    }
return 0;    
    
    
}