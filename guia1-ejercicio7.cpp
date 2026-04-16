#include<iostream>
using namespace std;
int main(){
    cout<<"Programa que nos dice el monto del descuento, total a pagar."<<endl;
    float descuento,aplicado,precio;
    string producto;
    cout<<"Producto: ";
    getline(cin,producto);

    cout<<"Precio: ";
    cin>>precio;

    cout<<"Descuento: ";
    cin>>descuento;

    cout<<"\n";

    aplicado = precio * (100 - descuento) / 100;
    cout<<"Producto: "<<producto<<endl;
    cout<<"Precio: "<<precio<<"$"<<endl;
    cout<<"Descuento : "<<descuento<<"%"<<endl;
    cout<<"Monto total: "<<aplicado<<"$"<<endl;
}
