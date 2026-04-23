#include<iostream>
int main(){
    int edad,mayor=0;
    while(edad !=0){
        std::cout<<"Edad: ";
        std::cin>>edad;
        if(edad >= 18){
            mayor = mayor +1;
        }
        else{

        }
    }
    std::cout<<"Cantidad de personas mayores: "<<mayor;
}





