/*
Tarea:Ejercicio 2
Autor:Stiven Jami
Fecha: 11 de mayo del 2026
Enunciado:Número mayor entre dos valores
Desarrolla un programa que permita ingresar dos números enteros y determine cuál
de los dos es mayor.
El programa debe estar modularizado usando funciones para:
• leer los datos,
• comparar los valores,
• mostrar el resultado.
Si ambos números son iguales, el programa también debe indicarlo.*/
#include <iostream>
using namespace std;

void pedirNumeros(int &a, int &b);
int calcularMayor(int a, int b);
void mostrarResultados(int mayor);
//definmos variables
int main() {
    int n1, n2;
    pedirNumeros(n1, n2);
    int mayor = calcularMayor(n1, n2);
    mostrarResultados(mayor);
    return 0;
}
//llamamos a la funcion nuevamente
void pedirNumeros(int &a, int &b) {
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
}
// hacemos comparacion
int calcularMayor(int a, int b) {
    if (a > b) {
        return a; 
    } else if (b > a) {
        return b; 
    } else {
        return 0; 
    }
}
//motramos el resultado
void mostrarResultados(int mayor) {
    cout << ".....Resultados....." << endl;
    if (mayor == 0) {
        cout << "Ambos numeros son iguales." << endl;
    } else {
        cout << "El numero mayor es: " << mayor << endl;
    }
}