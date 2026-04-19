#include<iostream>

int main(){
    int numero = -1;
    while (numero !=0){
        std::cout<<"\nIngresa un valor: ";
        std::cin>>numero;

        if (numero>0){
            if(numero % 2 == 0){
                std::cout<<"Es par.";
            }
            else{
                std::cout<<"Es impar.";
            }
        }
        else if(numero == 0){
            break;
        }
        else{
            std::cout<<"Numeros imaginarios no.";
        }
    }
}
