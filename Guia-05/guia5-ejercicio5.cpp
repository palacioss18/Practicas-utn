#include<iostream>

int main(){
    int horas;
    int total;
    std::cout<<"SISTEMA DE ESTACIONAMIENTO."<<std::endl;

    std::cout<<"Ingresa la cantidad de horas: ";
    std::cin>>horas;

    if(horas == 1){
        std::cout<<"Total a pagar: ";
        total = horas * 1500;
        std::cout<<total;
    }
    else if(horas <= 3 && horas >1){
        std::cout<<"Total a pagar: ";
        total = horas * 1200;
        std::cout<<total;
    }
    else if(horas > 3){
        std::cout<<"Total a pagar: ";
        total = horas * 1000;
        std::cout<<total;
    }
}
