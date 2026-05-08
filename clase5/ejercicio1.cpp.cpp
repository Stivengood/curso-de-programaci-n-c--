/*Nombre:Stiven Jami
Titulo:Conversion de temperatura
Enunciado: Escribe un algoritmo que reciba una temperatura en grados celsius, y esta la convierta ha grados fahrenheit.
Entrada/Proceso/Salida*/
#include <iostream>
using namespace std;
int main()
{
    float gradosCelsius, gradosFahrenheit;
    cout<< "Ingrese grados celsius:";
    cin>> gradosCelsius;
    gradosFahrenheit=(gradosCelsius*9/5)+32;
    cout<< "Grados fahrenheit="<<gradosFahrenheit<< endl;
    return 0;
}