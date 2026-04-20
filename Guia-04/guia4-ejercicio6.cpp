#include<iostream>

int main(){
    int numero;
    int suma = 0;
    int i = 1;
    std::cout<<"Pedí un número N y sumá todos los números desde 1 hasta N."<<std::endl;

    std::cout<<"Ingresa un numero: ";
    std::cin>>numero;

    while (i <= numero){
        suma += i;
        i++;
    }

    std::cout<<"Resultado: "<<suma<<std::endl;
    return 0;
}
