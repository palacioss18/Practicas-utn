#include<iostream>

int main(){
    int contador=0,nota,aprobados=0,desaprobados=0;
    while(contador <5){
        std::cout<<"Ingrese nota: ";
        std::cin>>nota;
        if(nota >6){
            aprobados = aprobados + 1;
        }
        else{
            desaprobados = desaprobados + 1;
        }
        contador = contador + 1;
    }
    std::cout<<"Cantidad de aprobados: "<<aprobados<<std::endl;
    std::cout<<"Cantidad de desaprobados: "<<desaprobados<<std::endl;
}
