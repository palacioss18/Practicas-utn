#include<iostream>
using namespace std;
int main(){
    float numero1,numero2;
    string operacion;
    cout<<"Operaciones aritmeticas"<<endl;

    cout<<"Ingrese el primer numero: ";
    cin>>numero1;
    cout<<"Ingrese el segundo numero: ";
    cin>>numero2;

    cout<<"Que operacion desea realizar: ";
    cin>>operacion;

    if (operacion == "suma"){
        cout<<"La suma es: "<<numero1 + numero2<<endl;
    }
    else if (operacion == "resta") {
        cout<<"La resta es: "<<numero1 - numero2<<endl;
    }
    else if (operacion == "multiplicacion") {
        cout<<"La multiplicacion es: "<<numero1 * numero2<<endl;
    }
    else if (operacion == "division") {
        if (numero2 !=0){
            cout<<"La division es: "<<numero1 / numero2<<endl;
        }
        else {
            cout<<"Error: No se puede dividir por cero."<<endl;
        }
    }
    else {
        cout<<"Operacion no reconocida."<<endl;
    }

}
