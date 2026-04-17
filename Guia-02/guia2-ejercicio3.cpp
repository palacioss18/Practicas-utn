#include <iostream>

int main(){
    std::string nombre_de_mascota, tipo, vacunado;

    std::cout << "Informacion de mascota" << std::endl;

    std::cout << "Nombre: ";
    std::cin >> nombre_de_mascota;

    std::cout << "Tipo: ";
    std::cin >> tipo;

    std::cout << "Vacunado (si/no): ";
    std::cin >> vacunado;

    std::cout << "Nombre de la mascota: " << nombre_de_mascota << std::endl;
    std::cout << "Tipo de mascota: " << tipo << std::endl;

    if (vacunado == "si"){
        std::cout << "Vacunado: Si" << std::endl;
    }
    else if (vacunado == "no"){
        std::cout << "Vacunado: No" << std::endl;
    }
    else{
        std::cout << "Error: ingreso invalido" << std::endl;
    }

    return 0;
}
