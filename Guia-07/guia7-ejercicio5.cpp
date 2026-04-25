#include<iostream>
int main(){
    //Programa para calcular la tabla de multiplicacion de un numero.
    int numero;
    std::cout<<"Ingrese un numero: ";
    std::cin>>numero;
    for(int i = 1; i <=10;i++){
        std::cout<<numero<<" x "<<i<<" = "<<numero*i<<std::endl;
    }
}
