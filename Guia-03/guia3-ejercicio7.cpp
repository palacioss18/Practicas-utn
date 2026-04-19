#include<iostream>

int main(){
    int numero1,numero2;
    std::cout<<"VERIFICAMOS CUAL ES MAYOR."<<std::endl;

    std::cout<<"Ingrese primer numero: ";
    std::cin>>numero1;

    std::cout<<"Ingrese el segundo numero: ";
    std::cin>>numero2;

    if (numero1 > numero2){
        std::cout<<numero1<<" Es mayor que: "<<numero2<<std::endl;
    }
    else if(numero2 > numero1) {
        std::cout<<numero2<<" Es mayor que: "<<numero1<<std::endl;
    }
    else{
        std::cout<<"SON IGUALES";
    }

}
