#include<iostream>
#include<string>

int main(){

    std::string opcion;
    int numero;
    int contador = 0;
    int minimo, maximo, total = 0;
    float promedio;

    bool primerNumero = true;

    while(true){
        std::cout << "Que opcion desea realizar\n";
        std::cout << "1) Cargar datos\n2) Mostrar datos\n3) Cerrar: ";
        std::cin >> opcion;

        if(opcion == "1"){
            while(true){
                std::cout << "Ingrese numero (-1 para salir): ";
                std::cin >> numero;

                if(numero == -1){
                    break;
                }

                if(primerNumero){
                    minimo = maximo = numero;
                    primerNumero = false;
                } else {
                    if(numero < minimo){
                        minimo = numero;
                    }
                    if(numero > maximo){
                        maximo = numero;
                    }
                }

                total += numero;
                contador++;
            }
        }
        else if(opcion == "2"){
            if(contador == 0){
                std::cout << "No hay datos cargados.\n";
            } else {
                promedio = (float) total / contador;

                std::cout << "Minimo: " << minimo << std::endl;
                std::cout << "Maximo: " << maximo << std::endl;
                std::cout << "Promedio: " << promedio << std::endl;
            }
        }
        else if(opcion == "3"){
            std::cout << "Saliendo...\n";
            break;
        }
    }
}



