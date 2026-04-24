#include<iostream>

int main(){
    int operacion = 0;
    int c = 0, precio, monto = 0;
    int catAm = 0, catAc = 0;
    int catBm = 0, catBc = 0;
    int catCm = 0, catCc = 0;
    double prom = 0;

    while(true){
        std::cout<<"1) Cargar datos\n2) Mostrar datos\n3) Salir\n";
        std::cout<<"Opcion: ";
        std::cin>>operacion;

        switch(operacion){
            case 1:
                std::cout<<"Precio de producto: ";
                std::cin>>precio;

                c++;
                monto += precio;

                if(c > 0){
                    prom = (double)monto / c;
                }

                if(precio >= 0 && precio <= 10000){
                    catAc++;
                    catAm += precio;
                }
                else if(precio <= 50000){
                    catBc++;
                    catBm += precio;
                }
                else{
                    catCc++;
                    catCm += precio;
                }
                break;

            case 2:
                std::cout<<"Monto total: "<<monto<<"\n";
                std::cout<<"Promedio: "<<prom<<"\n";

                std::cout<<"## Monto por categoria ##\n";
                std::cout<<"A: "<<catAm<<"\n";
                std::cout<<"B: "<<catBm<<"\n";
                std::cout<<"C: "<<catCm<<"\n";

                std::cout<<"## Cantidad por categoria ##\n";
                std::cout<<"A: "<<catAc<<"\n";
                std::cout<<"B: "<<catBc<<"\n";
                std::cout<<"C: "<<catCc<<"\n";
                break;

            case 3:
                std::cout<<"GRACIAS!\n";
                return 0;

            default:
                std::cout<<"Opcion invalida\n";
        }
    }
}
