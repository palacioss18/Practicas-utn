#include<iostream>
//PROGRAMA PARA DETERMINAR SI UN NUMERO ES PAR, NEGATIVO O POSITIVO Y MULTIPLO DE 5.
int main(){
    int numero;
    std::cout<<"Ingrese un numero: ";
    std::cin>>numero;

    // POSITIVO / NEGATIVO
    if(numero >= 0){
        std::cout<<"Es positivo\n";
    } else {
        std::cout<<"Es negativo\n";
    }

    // PAR / IMPAR
    if(numero % 2 == 0){
        std::cout<<"Es par\n";
    } else {
        std::cout<<"Es impar\n";
    }

    // MULTIPLO DE 5
    if(numero % 5 == 0){
        std::cout<<"Es multiplo de 5\n";
    } else {
        std::cout<<"No es multiplo de 5\n";
    }

    return 0;
}
