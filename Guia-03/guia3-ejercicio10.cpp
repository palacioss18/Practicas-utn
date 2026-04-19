#include<iostream>

int main(){
    int nota;
    std::cout<<"SISTEMA DE CALIFICACION COMPLETA"<<std::endl;

    std::cout<<"INGRESE SU NOTA: ";
    std::cin>>nota;

    if(nota >= 0 && nota <=10){
        if(nota <= 6){
            std::cout<<"DESAPROBADO"<<std::endl;
        }
        else if(nota == 7){
            std::cout<<"APROBADO"<<std::endl;
        }
        else if(nota == 8 || nota ==9){
            std::cout<<"Muy bueno"<<std::endl;
        }
        else if(nota == 10){
            std::cout<<"Excelente"<<std::endl;
        }

    }
    else{
        std::cout<<"NOTA INVALIDA!!"<<std::endl;
    }
}
