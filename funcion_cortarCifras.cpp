//Diseñe la función que recibe como parámetro un entero y devuelve la cantidad de cifras de este entero.
#include <iostream>
#include <cmath>
using namespace std;

// Función que determina la cantidad de cifras de un número entero
int contarCifras(int numero) {
    if (numero == 0) {
        return 1; // El número 0 tiene una cifra
    }

    // Para contar cifras de números negativos
    numero = abs(numero);

    int contador = 0;
    while (numero > 0) {
        numero /= 10; // Dividir el número por 10 en cada iteración
        contador++;   // Incrementar el contador en cada iteración
    }
    return contador;
}

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número
    cout << "Ingrese un número: ";
    cin >> numero;

    // Llamar a la función y mostrar el resultado
    int cifras = contarCifras(numero);
    cout << "El número " << numero << " tiene " << cifras << " cifras." << endl;

    return 0;
}
