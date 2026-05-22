#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4;
    int promedio;

    cout << "Ingrese la nota 1: ";
    cin >> n1;
    cout << "Ingrese la nota 2: ";
    cin >> n2;
    cout << "Ingrese la nota 3: ";
    cin >> n3;
    cout << "Ingrese la nota 4: ";
    cin >> n4;

    promedio = (n1 + n2 + n3 + n4) / 4;

    cout << "El promedio es: " << promedio << endl;

    if (promedio >= 10)
    {
        cout << "Supletorio" << endl;
    }
    else if (promedio >= 14)
    {
        cout << "Aprueba" << endl;
    }
    else
    {
        cout << "Reprueba" << endl;
    }

    return 0;
}