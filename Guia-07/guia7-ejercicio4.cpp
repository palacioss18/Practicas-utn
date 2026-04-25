#include<iostream>
int main(){
    //sumatoria del numero ingresado hasta 1 
    int numero;
    int suma = 0;

    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    for(int i = 1; i <= numero; i++){
        suma = suma + i;
    }

    std::cout << "La sumatoria total es: " << suma << std::endl;

    return 0;
}
