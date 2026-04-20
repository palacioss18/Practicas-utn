//CAJERO AUTOMATICO
#include<iostream>

using namespace std;

int main(){
    int saldo;
    char consulta;
    int cantidad;
    cout<<"Ingresar saldo: ";
    cin>>saldo;

    cout<<"Que operacion vas a realizar: ";
    cin>>consulta;

    switch(consulta){
        case 'c':
            cout<<"Tu saldo es: ";
            cout<<saldo;
            break;
        case 'd':
            cout<<"Cuanto desea depositar: ";
            cin>>cantidad;
            saldo = cantidad + saldo;
            cout<<"Saldo total: "<<saldo;
            break;
        case 'e':
            cout<<"Cuanto desea extraer: ";
            cin>>cantidad;
            if(cantidad <= saldo){
            saldo = saldo - cantidad;
            cout<<"Saldo actualizado: "<<saldo;
            break;
            }
            else{
                cout<<"Operacion invalida.";
            }

    }
    return 0;
}
