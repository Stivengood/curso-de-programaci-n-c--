/*
Nombre:Stiven Jami
Clase 10:Ecamen 1
Fecha: 13 de mayo del 2026
Tema:Sistema de registro y análisis de notas de estudiantes

Una academia desea llevar un control básico de las notas de un grupo de estudiantes
mediante un programa en C++.
Se requiere desarrollar un sistema que permita registrar y analizar las calificaciones
de un grupo pequeño de estudiantes usando arreglos unidimensionales y
funciones.

El programa debe trabajar con un máximo de 20 estudiantes.
Cada estudiante tendrá:
• su nombre
• una nota final
La nota debe manejarse en escala de 0 a 20.
El programa debe presentar un menú repetitivo con varias opciones para que el
usuario pueda trabajar con la información registrada.*/
#include <iostream>
using namespace std;
string ingreseNombre[7]={"Alison", "Esteban", "Ana", "David", "Sara", "Alex", "Jose"};
void cantidasDeEstudiantes(int &a, int &b, int &c, int &d, int &e, int &f, int &g);
int ingreseNotas[7];
int calcularPromedio(int notas);
void mostarResultados( int notas, int promedio, int );
int main(){
    int n1, n2, n3, n4, n5, n6, n7;
    int ingreseDeNotas[i];
    int posicion=0;
    cantidasDeEstudiantes(n1, n2, n3, n4, n5, n6, n7);
    int notas=calcularPromedio(n1, n2, n3, n4, n5, n6, n7);
    void mostaraResultados(int notas, int promedio);
    return 0;

}
cout<<"Ingrese su nota ha estada del 0/20"<<endl;
void cantidadEstudiantes(int &a, int &b, int &c, int &d, int &e, int &f, int &g){
    cout<<"Ingrese nota"<<ingreseNombre<<endl;
    cin >>a >> b >> c >> d >> e >>f >>g;
}
int calcularPromedio(int notas){
    if (ingreseNotas[i]< 0 && ingreseNotas[i]>20)
    {
        cout<<"Nota ingresada invalida"<<posision<<endl;
    }else if (ingreseNotas[i]>0 && ingreseNotas[i]<=20)
    {
        notas=(n1+n2+n3+n4+n5+n6+n7)/7;
    }else if (notas>=14 && notas<=20)
    {
        cout<<"Aprueba"<<endl;
    }else if (notas<14 && notas>=10)
    {
        cout<<"supletorios"<<endl;
    }else{
        cout<<"Reprueba"<<endl;
    }   
}
void mostrarResultados(int notas, int promedio){
    int mayor=0;
    int menor=0;
    cout<<"resultado"<<endl;
    for (int i = 0; i < 7; i++)
    {
        if (ingreseNotas[1]>mayor)
        {
            mayor=ingreseNotas[i];
            cout<<"la nota mas alta es de :"<<mayor<<":"<<ingreseNotas[i]<<endl;
        }else if (ingreseNotas[i]<menor)
        {
            menor=ingreseNotas[i];
            cout<<"la nota mas baja es de :"<<menor<< ingreseNotas[i]<<endl;
        } 
    }
    cout<<"la cantidad de aprovado es de :"<<notas<<endl;
    
}

    

