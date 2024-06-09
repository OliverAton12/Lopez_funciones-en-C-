// Diseñe la función que recibe como parámetro un entero y devuelve verdadero si el número es par, devuelve falso si es impar
#include <iostream>
using namespace std;

// Función que determina si un número es par
bool esPar(int numero) {
    return (numero % 2 == 0);
}

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número
    cout << "Ingrese un número: ";
    cin >> numero;

    // Llamar a la función y mostrar el resultado
    if (esPar(numero)) {
        cout << "El número " << numero << " es par." << endl;
    } else {
        cout << "El número " << numero << " es impar." << endl;
    }

    return 0;
}
