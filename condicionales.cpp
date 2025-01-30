#include <iostream>

int main(){

    int edad;
    std::cout<<"Bienvenido ingrese su edad :  ";
    std::cin >> edad;

    if (edad >=18)
    {
        std::cout<<"Bienvenido al hacking !!";
    }
    else{
        std::cout<<"NO puede ingresar eres menor";
    }
    

    return 0;
}