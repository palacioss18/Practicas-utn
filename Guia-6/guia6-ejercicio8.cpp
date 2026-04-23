#include<iostream>

int main(){
    int intentos=0, numero=0, total=0;

    while(intentos <10){
        std::cout<<"Ingresa un numero: ";
        std::cin>>numero;

        intentos = intentos + 1;
        total = total+numero;
    }
    std::cout<<total;
}
