#include<iostream>

int main(){
    int edad;
    std::cout<<"VAMOS A VERIFICAR SI SOS MAYOR DE EDAD."<<std::endl;

    std::cout<<"ingrese su edad: ";
    std::cin>>edad;

    if (edad >=18){
        std::cout<<"SOS mayor de edad."<<std::endl;
    }
    else{
        std::cout<<"SOS menor de edad."<<std::endl;
    }
}
