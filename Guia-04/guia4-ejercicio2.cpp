#include<iostream>

int main(){
    std::cout<<"\nCONTADOR DE DESPEGUE.\n"<<std::endl;
    
    int contador = 10;

    while(contador >= 0){
        std::cout<<"CONTADOR: "<<contador<<std::endl;
        contador --;
        if (contador == 0){
            std::cout<<"\nDESPEGANDO COHETE!!\n"<<std::endl;
            break;
        }
    }
    return 0;
}
