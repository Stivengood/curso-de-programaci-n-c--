/*
Tarea:Ejercicio 3
Autor:Stiven Jami
Fecha: 11 de mayo del 2026
Enunciado:Área de un rectángulo
Desarrolla un programa que permita ingresar la base y la altura de un rectángulo.
Usa funciones para:
• leer los datos,
• calcular el área,
• mostrar el resultado.
El programa debe trabajar con valores reales si el usuario ingresa decimal.
*/
#include <iostream>
using namespace std;
void leerNumero(int &a, int &b);
int calcularArea(int a, int b);
void mostrarResultado(int area);
//declaramos las variables
int main(){
    int n1, n2;
    leerNumero(n1, n2);
    int area=calcularArea(n1, n2);
    mostrarResultado(area);
    return 0;
}
