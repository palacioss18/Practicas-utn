#include<iostream>
#include<string>

int main(){
    std::string nombre_producto;
    int precio_unitario,cantidad;
    std::cout<<"FACTURA SIMPLE"<<std::endl;

    std::cout<<"Nombre del producto: ";
    std::getline(std::cin,nombre_producto);

    std::cout<<"Precio unitario: ";
    std::cin>>precio_unitario;

    std::cout<<"Cantidad: ";
    std::cin>>cantidad;

    std::cout<<"\nPROCESANDO INFORMACION\n";
    std::cout<<"Producto: "<<nombre_producto<<std::endl;
    std::cout<<"Total a pagar: "<<precio_unitario*cantidad<<"$"<<std::endl;
}
