#include<iostream>

int main(){
    std::cout << "\nSUMA ACUMULADA\n";
    
    int numero = -1; // Lo inicializamos con algo que NO sea 0
    int suma = 0;

    while (numero != 0){
        std::cout << "Ingrese un numero (0 para salir): ";
        std::cin >> numero;
        
        suma += numero; // Esto es lo mismo que suma = suma + numero
        std::cout << "Suma actual: " << suma << "\n\n";
    }

    std::cout << "RESULTADO FINAL: " << suma << std::endl;
    return 0;
}
