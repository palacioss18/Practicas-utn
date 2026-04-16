#include<iostream>
using namespace std;
int main(){
    double numero,porcentaje,resultado;
    
    cout<<"Vamos a calcular el porcentaje del numero que ingrese el usuario."<<endl;

    cout<<"Ingresa el numero: ";
    cin>>numero;

    cout<<"ingresa un porcentaje: ";
    cin>>porcentaje;

    resultado = numero * (porcentaje / 100);
    cout << "El " << porcentaje << "% de " << numero << " es: " << resultado << endl;

    return 0;
}
