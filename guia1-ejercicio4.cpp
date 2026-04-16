#include<iostream>
using namespace std;
int main(){
    int base,altura;
    cout<<"Programa para calcular el area y perimetro de un rectangulo."<<endl;

    cout<<"Altura: ";
    cin>>altura;

    cout<<"Base: ";
    cin>>base;
    cout<<"El perimetro es: "<<2*(base+altura)<<" CM"<<endl;
    cout<<"La altura es: "<<base*altura<<" CM"<<endl;
}
