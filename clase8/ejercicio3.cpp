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
void leerNumero(int &a, int &b){
    cout<<"Ingrese altura :";
    cin>>a;
    cout<<"Ingrese base :";
    cin>>b;
}
int calcularArea(int a, int b){
    if (a !=b)
    {
        return a*b;
    }else{
        return 0;
    }
    
}
void mostrarResultado(int area){
    cout<<"---Resultado---"<<endl;
    if (area == 0)
    {
        cout<<"Error: Esto es un cuadrado";
    }else{
        cout<<"El area del rectangulo es de :"<<area<<endl;
    }
    
}