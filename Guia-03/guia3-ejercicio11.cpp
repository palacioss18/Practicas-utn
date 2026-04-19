#include<iostream>

int main(){
    int numero;
    std::cout<<"VALIDACION DE RANGO"<<std::endl;

    std::cout<<"Ingrese el numero: ";
    std::cin>>numero;

    if (numero >=10 && numero <= 20){
        std::cout<<"ESTA EN EL RANGO."<<std::endl;
    }
    else{
        std::cout<<"FUERA DEL RANGO."<<std::endl;
    }
}
