/*
Tarea:Ejercicio 5
Autor:Stiven Jami
Fecha 12 de mayo del 2026
Enunciado:Contador actualizado con referencia
Desarrolla un programa que pida al usuario un número entero positivo n y luego
incremente un contador desde 0 hasta n, usando una función que actualice el valor
del contador.
*/
#include <iostream>
using namespace std;
void ingresoDatos(int &a);
void incrementarContador(int &b); 

int main() {
    int n;
    int contador = 0; 
    ingresoDatos(n);
    cout << "Incrementando contador"<<endl;
    for (int i = 0; i <= n; i++) {
        cout << "Valor actual: " << contador<< endl;
        incrementarContador(contador);
    }
    return 0;
}
void ingresoDatos(int &a) {
    cout << "Ingrese numero entero positivo : ";
    cin >> a;
}
void incrementarContador(int &b) {
    b=b+1; 
}