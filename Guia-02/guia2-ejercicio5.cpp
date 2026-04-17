#include<iostream>
#include<string>
int main(){
    int anio;
    double precio;
    std::string marca,modelo;

    std::cout<<"Marca: ";
    std::getline(std::cin,marca);

    std::cout<<"Modelo; ";
    std::cin>>modelo;

    std::cout<<"Año: ";
    std::cin>>anio;

    std::cout<<"Precio: ";
    std::cin>>precio;

    std::cout<<"== REGISTRO =="<<std::endl;
    std::cout<<"Marca: "<<marca<<std::endl;
    std::cout<<"Modelo: "<<modelo<<std::endl;
    std::cout<<"Año: "<<anio<<std::endl;
    std::cout<<"Precio: "<<precio<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"Con un 10% de descuento costaria: "<<precio-(precio*0.10);
    
}
