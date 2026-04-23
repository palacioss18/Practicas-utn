#include<iostream>

int main(){
    int c=0,num=0;
    int s=1;
    std::cout<<"Ingrese un numero: ";
    std::cin>>num;
    while(c<num){
        c=c+1;
        s=s*c;
    }
    std::cout<<"El factorial del numero "<<num<<" es "<<s<<std::endl;
    return 0;
}
