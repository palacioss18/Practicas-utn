#include<iostream>
int main(){
    int num1=-1,par=0,impar=0;

    while(num1 !=0){
        std::cout<<"Ingrese un numero (0 para salir): ";
        std::cin>>num1;
        if(num1 % 2 == 0){
            par = par + 1;
        }
        else{
            impar = impar + 1;
        }
    }
    std::cout<<"cantidad de pares: "<<par<<std::endl;
    std::cout<<"cantidad de impares: "<<impar<<std::endl;
}
