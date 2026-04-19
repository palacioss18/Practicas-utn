#include<iostream>
int main(){
    int numero;
    std::cout<<"CALCULAR UN NUMERO SI ES POSITIVO O NEGATIVO."<<std::endl;

    std::cout<<"Ingrese un numero: ";
    std::cin>>numero;

    if(numero >=0){
        std::cout<<"Es positivo."<<std::endl;
    }
    else{
        std::cout<<"Es negativo."<<std::endl;
    }
}
