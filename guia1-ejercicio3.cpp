#include<iostream>
using namespace std;
int main(){
    int horas;
    cout<<"Vamos a calcular cuantos segundos equivale las horas ingresadas por el usuario."<<endl;
    cout<<"ingresa una cantidad de horas: ";
    cin>>horas;
    if (horas >= 0){
        cout<<"Cantidad de segundos: "<<horas*3600/1<<endl;
    }
    else{
        cout<<"ERROR!!";
    }
}
