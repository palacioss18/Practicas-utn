#include<iostream>

int main(){
    std::cout<<"MES DEL AÑO"<<std::endl;
    int numero;

    std::cout<<"Ingrese un numero: ";
    std::cin>>numero;

    switch(numero){
        case 1:
            std::cout<<"HOY ES ENERO.";
            break;
        case 2:
            std::cout<<"HOY ES FEBRERO.";
            break;
        case 3:
            std::cout<<"HOY ES MARZO.";
            break;
        case 4:
            std::cout<<"HOY ES ABRIL";
            break;
        case 5:
            std::cout<<"HOY ES MAYO";
            break;
        case 6:
            std::cout<<"HOY ESJUNIO";
            break;
        case 7:
            std::cout<<"HOY ES JULIO";
            break;
        case 8:
            std::cout<<"HOY ES AGOSTO";
            break;
        case 9:
            std::cout<<"HOY ES SEPTIEMBRE";
            break;
        case 10:
            std::cout<<"HOY ES OCTUBRE";
            break;
        case 11:
            std::cout<<"HOY ES NOVIEMBRE";
            break;
        case 12:
            std::cout<<"HOY ES DICIEMBRE";
            break;
        default:
            std::cout<<"NO EXISTE"<<std::endl;
            break;
    }
    return 0;
}
