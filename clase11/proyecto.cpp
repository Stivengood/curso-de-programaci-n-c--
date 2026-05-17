/*
Tarea:Proyecto
Autor:Stiven Jami
Fecha: 17 de mayo del 2026
Enunciado:Sistema de control de ventas
E/P/S
Entrada:
     seleccionar productos
     seleccionar si seguir o pagar
     ingresar la cantidad que debe de pagar
Proceso:
     leer productos seleccionados
     calcular si pagado es igual a pagar 
Salida:
    mostrar los productos que compro
    mostrar su cambio 
pseint:
    definimos los productos
    mostrar productos
    leer productos
    mostrar productos seleccionados con su precio a pagar
    leer pagado

    SI
       pagado es > o = a pagar
       mostrar cambio
    SiNo
       mostrar lo que falta a pagar
    mostrar productos elejidos 
    mostrar valor ha pagar 
    FinSi       
*/
#include <iostream>
using namespace std;
string productos[5]={"leche", "arroz", "aceite", "atun", "cereal"};
double precioProductos[5]={1.00, 0.80, 0.85, 1.05,1.70 };
int cantidadProductos[5]={3, 5, 2, 4, 3};
int productoElejidos[5]={0, 0, 0, 0, 0};
void mostrarProductosElejidos();
double calcularPrecio(int elejidos, double pagar);
int main(){
    int elejidos;
    double pagar;
    char continuar='y';
    char seguirComprando='s';
    char salir='k';
    cout<<"Bienvenido al tuti"<<endl;
    do
    {
        cout<<"\nDisponibilidad de productos"<<endl;
        for (int i = 0; i < 5; i++)
        {
            cout<<cantidadProductos[i]<<"."<<productos[i]<<"=$"precioProductos[i]<<endl;
            
            
        }
        
    } while ( );
    


}