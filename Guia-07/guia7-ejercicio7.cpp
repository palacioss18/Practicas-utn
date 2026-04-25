#include<iostream>

int main(){
    //contador del 1 al 100 y multiplos de 3
    int contador = 0;
    for(int i = 1;i <=100;i++){
        if(i % 3 == 0){
            contador = contador + 1;
        }
    }
    std::cout<<"Multiplos: "<<contador<<std::endl;
}
