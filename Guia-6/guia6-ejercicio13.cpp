#include<iostream>
int main(){
    std::string nombres;
    int cant=0;

    while(nombres != "fin"){
        std::cout<<"Nombre: ";
        std::cin>>nombres;
        if(nombres == "fin"){
            break;
        }
        cant = cant+1;
    }
    std::cout<<"Alumnos ingresados: "<<cant<<std::endl;
}
