/*
Tarea:Ejercicio 1
Autor:Stiven Jami
Fecha:10 de mayo del 2026
Enunciado:Suma y promedio de 3 números
Desarrolla un programa que permita ingresar 3 números enteros y que use funciones
para:
• leer los números,
• calcular la suma,
• calcular el promedio,
• mostrar los resultados.*/
#include <iostream>
using namespace std;

void ingresoDeNotas(int &a, int &b, int &c);
int calcularSuma(int a, int b, int c);
double calcularPromedio(int suma);
void calcularNotaFinal(int suma, double promedio);

int main() {
    int n1, n2, n3;
    ingresoDeNotas(n1, n2, n3);
    int suma = calcularSuma(n1, n2, n3);
    double promedio = calcularPromedio(suma);
    calcularNotaFinal(suma, promedio);   
    return 0;
}
void ingresoDeNotas(int &a, int &b, int &c) {
    cout << "Ingrese las 3 notas: " << endl;
    cin >> a >> b >> c;
}
int calcularSuma(int a, int b, int c) {
    return a + b + c;
}
double calcularPromedio(int suma) {
    return suma / 3.0; 
}
void calcularNotaFinal(int suma, double promedio) {
    cout << "La suma de las notas es de = " << suma << endl;
    cout << "Su promedio es de = " << promedio << endl;
}