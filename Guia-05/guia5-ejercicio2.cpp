#include<iostream>

int main(){
    int saldo;
    std::cout<<"CALCULO DE IMPUESTO PROGRESIVO."<<std::endl;

    std::cout<<"Ingrese saldo: ";
    std::cin>>saldo;

    if(saldo < 100000){
        std::cout<<"Impuesto del 5%: "<<saldo-(saldo*0.05)<<std::endl;
    }
    else if(saldo > 100001 && saldo <= 300000){
        std::cout<<"Impuesto del 10%: "<<saldo-(saldo*0.1)<<std::endl;
    }
    else if(saldo > 300000){
        std::cout<<"Impuesto del 15%: "<<saldo-(saldo*0.15)<<std::endl;
    }
    else{
        std::cout<<"error"<<std::endl;
    }
    return 0;
}
