#include<iostream>

int main(){
    double num1,num2;
    char operacion;

    std::cout<<"CALCULADORA SIMPLE"<<std::endl;

    std::cout<<"Ingrese primer numero: ";
    std::cin>>num1;

    std::cout<<"Ingrese operacion (+,-,*,/): ";
    std::cin>>operacion;

    std::cout<<"Ingrese segundo numero: ";
    std::cin>>num2;

    switch (operacion) {
        case '+':
            std::cout<<"Resultado: "<<num1 + num2;
            break;
        case '-':
            std::cout<<"Resultado: "<<num1 - num2;
            break;
        case '*':
            std::cout<<"Resultado: "<<num1 * num2;
            break;
        case '/':
            if(num2 !=0){
                std::cout<<"Resultado: "<<num1 / num2;
            }
            else{
                std::cout<<"Error: division por cero";
            }
            break;
        default:
            std::cout<<"Operacion invalida";
        }
        return 0;
}
