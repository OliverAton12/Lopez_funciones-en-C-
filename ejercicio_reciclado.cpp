#include <iostream>  // Incluye la biblioteca iostream para las operaciones de entrada/salida
using namespace std;

// Función que imprime la tabla de multiplicar de un número dado
void TablaMultiplicar(int tabla)
{
    cout << endl << "Tabla de multiplicar del " << tabla;
    for(int k = 1; k <= 12; k++)
    {
        cout << endl << tabla << " x " << k << " = " << tabla * k;
    }
}

// Función que imprime la tabla de multiplicar de un número dado, 
// pero solo desde un límite inferior hasta un límite superior
void TablaLimites(int tabla, int inicio, int fin)
{
    cout << endl << "Tabla de multiplicar del " << tabla;
    for(int k = inicio; k <= fin; k++)
    {
        cout << endl << tabla << " x " << k << " = " << tabla * k;
    } 
}

int main()
{
    cout << endl << "Función que calcula las 20 primeras tablas de multiplicar";
    
    // Bucle para imprimir las tablas del 1 al 20
    for(int i = 1; i <= 20; i++)
    {
        TablaMultiplicar(i);
    }

    return 0;
}
