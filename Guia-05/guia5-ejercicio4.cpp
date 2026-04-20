#include<iostream>

int main(){
    int precio;
    std::string forma;
    std::cout<<"SIMULACION DE COMPRA CON IMPUESTOS Y DESCUENTOS"<<std::endl;

    std::cout<<"Ingrese precio: ";
    std::cin>>precio;

    std::cout<<"Forma de pago: ";
    std::cin>>forma;

    if(forma == "efectivo"){
        std::cout<<"Descuento aplicado: "<<(precio*0.10)<<"$"<<std::endl;
        std::cout<<"Monto total: "<<precio-(precio*0.10)<<"$";
    }
    else if(forma == "debito"){
        std::cout<<"Descuento aplicado: "<<(precio*0.05)<<"$"<<std::endl;
        std::cout<<"Monto total: "<<precio-(precio*0.05)<<"$";
    }
    else if(forma == "credito"){
        std::cout<<"Recargo aplicado: "<<(precio*0.15)<<"$"<<std::endl;
        std::cout<<"Monto total: "<<precio+(precio*0.15)<<"$"<<std::endl;
    }

}
