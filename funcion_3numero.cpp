//FALTA AUTOR Y FECHA

#include <iostream>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()
using namespace std;

// Función que genera números aleatorios y retorna su sumatoria
int SumaNumAleatorios(int cantidad, int limiteInferior, int limiteSuperior) {
    int suma = 0;
    // Inicializar la semilla para generar números aleatorios
    srand(time(0));

    for (int i = 0; i < cantidad; i++) {
        int numeroAleatorio = rand() % (limiteSuperior - limiteInferior + 1) + limiteInferior;
        suma += numeroAleatorio;
    }

    return suma;
}

int main() {
    int cantidad, limiteInferior, limiteSuperior;

    // Solicitar al usuario que ingrese la cantidad de números aleatorios y los límites
    cout << "Ingrese la cantidad de números aleatorios: ";
    cin >> cantidad;
    cout << "Ingrese el límite inferior: ";
    cin >> limiteInferior;
    cout << "Ingrese el límite superior: ";
    cin >> limiteSuperior;

    // Llamar a la función y mostrar el resultado
    int suma = SumaNumAleatorios(cantidad, limiteInferior, limiteSuperior);
    cout << "La sumatoria de los " << cantidad << " números aleatorios entre " << limiteInferior << " y " << limiteSuperior << " es " << suma << endl;

    return 0;
}
