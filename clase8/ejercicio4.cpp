/*
Tarea:Ejercicio 4
Autor:Stiven Jami
Fecha: 12 de mayo del 2026
Enunciado:Intercambio de dos números
Desarrolla un programa que permita ingresar dos números enteros y luego
intercambiar sus valores usando una función.
El programa debe:
• mostrar los valores antes del intercambio,
• realizar el intercambio usando una función,
• mostrar los valores después del intercambio.
*/
#include <iostream>
using namespace std;

void ingresarDatos(int &a, int &b);
void realizarIntercambio(int &a, int &b); 
void mostrarResultados(int a, int b);

int main() {
    int n1, n2;
    ingresarDatos(n1, n2);
    cout << "\n--- Antes del intercambio ---" << endl;
    cout << "N1: "<<n1<<endl;
    cout<<"N2: "<<n2<<endl;
    realizarIntercambio(n1, n2);
    mostrarResultados(n1, n2);
    return 0;
}
void ingresarDatos(int &a, int &b) {
    cout << "Ingrese numero 1: ";
    cin >> a;
    cout << "Ingrese numero 2: ";
    cin >> b;
}
void realizarIntercambio(int &a, int &b) {
    a = a + b; 
    b = a - b; 
    a = a - b; 
}
void mostrarResultados(int a, int b) {
    cout << "\n--- Despues del intercambio ---" << endl;
    cout << "Ahora el numero 1 vale: " << a << endl;
    cout << "Ahora el numero 2 vale: " << b << endl;
}