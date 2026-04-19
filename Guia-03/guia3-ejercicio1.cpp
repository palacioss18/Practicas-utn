#include<iostream>

int main(){
    int edad,compra;
    std::cout<<"ACCESO A DESCUENTO"<<std::endl;

    std::cout<<"Ingrese su edad: ";
    std::cin>>edad;

    std::cout<<"Ingrese el monto: ";
    std::cin>>compra;

    if (edad >= 60 || compra >= 50000){
        std::cout<<"Monto con el descuento: "<<compra-(compra*30/100)<<std::endl;
    }
    else{
        std::cout<<"Monto: "<<compra<<std::endl;
    }
}

