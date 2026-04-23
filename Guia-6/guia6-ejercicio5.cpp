    #include <iostream>

    int main() {
        int numero;
        int maximo = 0; // Aquí guardaremos el más grande

        std::cout << "Ingrese números (ingrese 0 para finalizar):" << std::endl;

        while (true) {
            std::cout << "Número: ";
            std::cin >> numero;

            // Condición para salir del bucle
            if (numero == 0) {
                break;
            }

            // Lógica para encontrar el mayor
            if (numero > maximo) {
                maximo = numero;
            }
        }

        if (maximo > 0) {
            std::cout << "El número mayor ingresado fue: " << maximo << std::endl;
        } else {
            std::cout << "No se ingresaron números mayores a 0." << std::endl;
        }

        return 0;
    }
