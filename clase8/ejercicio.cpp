/*

ejercicio 1 en clase
Autor: stiven Jami
fecha:8 de mayo del 2026*/
#include <iostream>
using namespace std;

void aumentar(int x)
{
    x=x+1;
    cout<<"Dentro de la funcion x vale:"<<x<<endl;

}
int main()
{
    int a=10;
    aumentar(a);

    cout<<"fuera de la funcion, a vale:"<<a<<endl;
    return 0;

}
