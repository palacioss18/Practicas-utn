#include<iostream>

int main(){
    int saldo, retirar;
    std::cout<<"Saldo: ";
    std::cin>>saldo;
    while(saldo >= 0){

        if(saldo >0){
            std::cout<<"Cuanto vas a retirar: ";
            std::cin>>retirar;
         if(retirar <= saldo){
            saldo = saldo-retirar;
            std::cout<<"Saldo actualizado: "<<saldo<<std::endl;
         }
        }
        else{
            break;
        }
    }
}
