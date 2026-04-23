#include<iostream>

int main(){
    std::string usuario = "jose",contrasenia = "palacios";
    

    while(true){
        std::cout<<"Usuario: ";
        std::cin>>usuario;

        std::cout<<"Contraseña: ";
        std::cin>>contrasenia;
        if(usuario == "jose" && contrasenia == "palacios"){
            std::cout<<"Ingresaste al sistema exitosamente"<<std::endl;
            break;
        }
        else if(usuario == "jose" || contrasenia == "palacios"){
            std::cout<<"Te equivocaste en uno."<<std::endl;
        }
        else{
            std::cout<<"Te equivocaste en los 2 pa."<<std::endl;
        }
    }
}
