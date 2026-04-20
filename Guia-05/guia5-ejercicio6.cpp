#include<iostream>
int main(){
    int notaP,notaR;

    std::cout<<"Nota principal: ";
    std::cin>>notaP;

    if(notaP >= 6){
        std::cout<<"APROBADO.";
    }
    else{
        std::cout<<"VAS A RECUPERATORIO!!."<<std::endl;
        std::cout<<"Nota del recuperatorio: ";
        std::cin>>notaR;
        if(notaR >= 6){
            std::cout<<"APROBADO";
        }
        else{
            std::cout<<"DESAPROBADO";
        }
    }
    return 0;
}
