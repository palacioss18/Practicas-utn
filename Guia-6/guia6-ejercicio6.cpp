#include<iostream>
int main(){
    //Mostrar numeros pares entre el 1 y 100.
    int numero = 0;
    while(numero <= 100){
        numero = numero +1;
        if(numero % 2 == 0){
            std::cout<<"Numero par: "<<numero<<std::endl;
        }
    }
    std::cout<<"Todos los numeros mostrados son pares.";
}
