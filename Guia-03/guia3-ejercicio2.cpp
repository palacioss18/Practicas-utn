#include<iostream>

int main(){
    int nota;
    std::cout<<"Programa para determinar si estas aprobado o desaprobado"<<std::endl;

    std::cout<<"Nota: ";
    std::cin>>nota;

    if (nota >= 6 && nota <=10){
        std::cout<<"FELICIDADES MUY BIEN!!, APROBADO"<<std::endl;
    }
    else if(nota <6 && nota >= 0){
        std::cout<<"Desaprobado, Para la proxima sera"<<std::endl;
    }
    else{
        std::cout<<"NOTA INVALIDA"<<std::endl;
    }
}
