#include<iostream>
int main(){
    int precio,total = 0;

    while(precio !=0){
        std::cout<<"Ingrese precio: ";
        std::cin>>precio;
        total = total + precio;
    }
    std::cout<<"Monto total a pagar: "<<total;
}


