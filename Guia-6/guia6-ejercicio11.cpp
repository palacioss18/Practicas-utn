#include<iostream>
int main(){
    int num1,num2;
    std::string operacion;

    while(num1 != 0){
        std::cout<<"Ingresa primer numero (para salir -> 'salir'):  ";
        std::cin>>num1;

        if(num1 == 0){
            std::cout<<"Saliendo...";
            break;
        }
        
        std::cout<<"Que operacion desea realizar: ";
        std::cin>>operacion;

        std::cout<<"Ingresa segundo numero: ";
        std::cin>>num2;  
        
        if(operacion == "+"){
            std::cout<<"Resultado: "<<num1 + num2<<std::endl;
        }
        else if(operacion == "-"){
            std::cout<<"Resultado: "<<num1 - num2<<std::endl;
        }

        
    }
    return 0;

}
