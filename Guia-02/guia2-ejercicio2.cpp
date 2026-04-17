#include<iostream>
using namespace std;
int main(){
    string nombre,apellido;
    double edad,altura,promedio;
    cout<<"Ficha de alumno."<<endl;

    cout<<"Nombre: ";
    getline(cin,nombre);

    cout<<"Apellido: ";
    getline(cin,apellido);

    cout<<"Edad: ";
    cin>>edad;

    cout<<"Altura: ";
    cin>>altura;

    cout<<"Promedio: ";
    cin>>promedio;
    cout<<"\n"<<endl;
    cout<<"DATOS DEL ALUMNO"<<endl;
    cout<<" "<<endl;    
    cout<<"Nombre del alumno: "<<nombre<<endl;
    cout<<"Apellido del alumno: "<<apellido<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Altura: "<<altura<<endl;
    cout<<"Promedio: "<<promedio<<endl;
}
