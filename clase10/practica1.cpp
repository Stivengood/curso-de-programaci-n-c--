/*
Autor: Stiven Jami
FEcha: 18 de mayo del 2026
Enunciado: Aprender arreglos
Tema: registro de temperatura
*/
#include <iostream>
using namespace std;
int main(){
    float novias [5];
    int suma = 0;
    cout<<"ingrese el numero de novias quew ha tenido cada año"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>novias[i];
        if (novias[i] == 0)
        {
            cout<<"usted es feo"<<endl;
            return 0;
        }else{
            suma = suma +novias[i];
        } 
    }
    cout<<"la suma de sus novias es de :"<<suma<<endl;
    return 0;
}
