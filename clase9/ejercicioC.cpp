/*
Clase 9
Ejercicio 2: Analisis de 5 numeros con funciones
Aturo: Jhonatan Torres
Fecha: 11 de mayo de 2026
Enunciado: Desarrollar un programa que:
    1. Solicite al usuario 5 numeros enteros
    2. Muestre la suma total
    3. Muestre el numero mayor
    4. Muestre cuantos numeros son positivos
El programa tiene errores intencionales.
*/
#include <iostream>
using namespace std;
int calcularSuma(int numeros[], int n)
{
    int suma = 0;
    for (int i = 0; i <= n; i++)
    {
        suma = suma + numeros[i];
    }
    return suma;
}
int encontrarMayor(int numeros[], int n)
{
    int mayor = 0;
    for (int i = 0; i < n; i++)
    {
        if (numeros[i] > mayor)
        {
            mayor = numeros[i];
        }
    }
    return mayor;
}
int contarPositivos(int numeros[], int n)
{
    int contador = 0;
    for (int i = 0; i < n; i++)
    {
        if (numeros[i] >= 0)
        {
            contador++;
        }
    }
    return contador;
}
int main()
{
    const int N = 5;
    int numeros[N];
    cout << "Ingrese 5 numeros enteros" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "numero " << i + 1 << ": ";
        cin >> numeros[i];
    }
    cout << "Suma: " << calcularSuma(numeros, N) << endl;
    cout << "Mayor: " << encontrarMayor(numeros, N) << endl;
    cout << "Cantidad de positivos: " << contarPositivos(numeros, N) << endl;
    return 0;
}