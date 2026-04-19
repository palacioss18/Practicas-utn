#include<iostream>

int main(){
    int numero = -1;
    int negativo = 0,positivo = 0;
    std::cout<<"Contar positivos y negativos"<<std::endl;

    while (numero !=0){
        std::cout<<"ingrese un numero: ";
        std::cin>>numero;
        if (numero >0){
            positivo += 1;
        }
        else if(numero < 0){
            negativo += 1;
        }
    }
    std::cout<<"positivos: "<<positivo<<"\nNegativos: "<<negativo<<std::endl;
    
}
