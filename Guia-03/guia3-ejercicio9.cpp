#include<iostream>
using namespace std;
int main(){
    int numero1,aux;
    cout<<"Ingrese un numero: ";
    cin>>numero1;
    aux<<numero1%2;
   if ( aux==0 ){
    cout<<"Es par";
    }
    else{
    cout<<"Es impar";
    }
    return 0;
}
