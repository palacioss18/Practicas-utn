#include<iostream>

int main(){
    std::cout<<"Suma hasta que diga 0"<<std::endl;
    int numero = -1;
    float suma = 0;
    while(numero !=0){
        std::cout<<"Ingresa un numero: ";
        std::cin>>numero;

        suma += numero;
        std::cout<<suma<<std::endl;
    }

}
