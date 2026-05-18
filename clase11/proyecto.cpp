/*
Tarea:Proyecto
Autor:Stiven Jami
Fecha: 17 de mayo del 2026
Enunciado:Sistema de control de ventas
E/P/S
Entrada:
     seleccionar productos
     seleccionar si seguir o pagar
Proceso:
     leer productos seleccionados
     calcular si pagado es igual a pagar 
Salida:
    mostrar su cambio 
pseint:
    definimos los productos
    mostrar productos
    leer productos
    mostrar su precio a pagar
    leer pagado

    SI
       pagado es > o = a pagar
       mostrar cambio
    SiNo
       mostrar lo que falta a pagar
    FinSi       
*/
#include <iostream>
using namespace std;

string productos[5] = {"leche", "arroz", "aceite", "atun", "cereal"};
double precioProductos[5] = {1.00, 0.85, 0.85, 1.05, 1.73};
int productoElejidos[5] = {0, 0, 0, 0, 0};
void calcularPrecio(double total, double pagoIngresado);

int main() {
    int elejidos;
    double pagarDinero;
    double totalFinal = 0;

    cout << "---Bienvenido al Tuti---" << endl;
    cout << "\nPRODUCTOS DISPONIBLES:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << productos[i] << ": $" << precioProductos[i]<<endl;
    }
    cout << "ingrese el numero [0] para pagar"<< endl;
    cout << "\nIngrese numero del 1 al 5 para elejir el producto: ";
    //usamos un bucle para seguir comprando o ir a pagar
    do {
        cin>> elejidos;
        if (elejidos >= 1 && elejidos <= 5) {
            int indice = elejidos - 1;
            productoElejidos[indice]++; 
            cout << ">> Agregaste: " << productos[indice] << " al carrito." << endl;
        } 
        else if (elejidos != 0) {
            cout << ">> Numero fuera de rango." << endl;
        }
    //el bucle continua hasta seleccionar el cero
    } while (elejidos != 0); 
    // alamcenamos los productos elejidos con su precio
    for (int i = 0; i < 5; i++) {
        totalFinal += productoElejidos[i] * precioProductos[i];
    }
    // mostramos cuanto debe de cancelar el cliente
    if (totalFinal > 0) {
        cout << "TOTAL A PAGAR: $" << totalFinal << endl;
        cout << "Ingrese con cuanto va a pagar: $";
        cin >> pagarDinero;

        // guardamos los datos en la funcion 
        calcularPrecio(totalFinal, pagarDinero);
    } else {
        cout <<"No compraste nada, ¡vuelve pronto!"<< endl;
    }
    return 0;
}
void calcularPrecio(double total, double pagoIngresado) {
    if (pagoIngresado >= total) {
        double vuelto = pagoIngresado - total;
        cout <<"---Gracias por su compra---"<<endl;
        cout << "Su vuelto es: $" << vuelto << endl;
    } else {
        double falta = total - pagoIngresado;
        cout <<"---Dinero insuficiente---"<<endl;
        cout <<"Le faltan: $"<< falta <<endl;
    }
}







