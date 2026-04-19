#include<iostream>

int main(){
    int edad;
    std::cout<<"CLASIFICACION DE EDAD."<<std::endl;

    std::cout<<"ingrese su edad: ";
    std::cin>>edad;

    if(edad >= 0 && edad <= 12){
        std::cout<<"Niño"<<std::endl;
    }
    else if(edad >=13 && edad <= 17){
        std::cout<<"Adolescente"<<std::endl;
    }
    else if(edad >=18 && edad <=59){
        std::cout<<"Adulto"<<std::endl;
    }
    else if(edad >= 60){
        std::cout<<"Adulto mayor"<<std::endl;
    }
    else{
        std::cout<<"EDAD INVALIDA";
    }

}
