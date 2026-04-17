#include<iostream>
#include<string>
int main(){
    std::string nombre;
    double edad, sueldo, porcentaje_aumento;

    std::cout <<"REGISTRO DE EMPLEADO"<<std::endl;

    std::cout <<"Ingresa el nombre: ";
    std::getline(std::cin,nombre);

    std::cout <<"Cual es su sueldo basico: ";
    std::cin >>sueldo;

    std::cout <<"Porcentaje de aumento: ";
    std::cin >>porcentaje_aumento;

    std::cout <<"\nPROCESANDO DATOS\n"<<std::endl;

    std::cout <<"Nombre: "<<nombre<<std::endl;
    std::cout <<"Sueldo basico: "<<sueldo<<std::endl;
    std::cout <<"Porcentaje de aumento: "<<porcentaje_aumento<<std::endl;
    // en la linea de abajo CALCULAMOS el sueldo total
    std::cout <<"Sueldo total: "<<sueldo + (sueldo * (porcentaje_aumento / 100))<<std::endl;
}
