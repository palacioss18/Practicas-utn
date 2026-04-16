#include<iostream>
using namespace std;
int main(){
    float numero1,numero2,numero3;
    cout<<"Vamos a calcular el promedio de las notas."<<endl;

    cout<<"Primera nota: ";
    cin>>numero1;
    
    cout<<"Segunda nota: ";
    cin>>numero2;

    cout<<"Tercera nota: ";
    cin>>numero3;
    float promedio = (numero1+numero2+numero3)/3;

    if ((numero1 < 11 && numero1 > -1) && (numero2 < 11 && numero2 > -1) && (numero3 < 11 && numero3 > -1)) {
        if (promedio >= 7 && promedio <= 10){
        cout<<"APROBADO"<<endl;
        }
        else if (promedio <= 4 && promedio >=0){
            cout<<"DESAPROBADO"<<endl;
        }
        else if (promedio > 4 && promedio < 7){
            cout<<"A FINAL"<<endl;
        }
    }
    else{
        cout<<"ERROR"<<endl;
        }
    }
