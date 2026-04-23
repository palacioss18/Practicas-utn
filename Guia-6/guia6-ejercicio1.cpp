#include <iostream>

int main() {
    double nota;
    double suma = 0;
    int contador = 0;

    while (true) {
        std::cout << "Ingrese nota (del 1 al 10, o -1 para terminar): ";
        std::cin >> nota;
        if (nota == -1) { // Primero chequeamos el centinela para salir
            break;
        }
        if (nota >= 1 && nota <= 10) {
            suma += nota;    // Acumulamos
            contador++;      // Contamos
        } else {
            std::cout << "Nota invalida. Intente de nuevo." << std::endl;
        }
    }
    if (contador > 0) {
        double promedio = suma / contador;
        std::cout << "Promedio final: " << promedio << std::endl;
        std::cout << "Total de notas procesadas: " << contador << std::endl;
    } else {
        std::cout << "No se ingresaron notas validas." << std::endl;
    }
    return 0;
}
