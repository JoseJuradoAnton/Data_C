#include <iostream>
#include <cmath>

int main() {
    
    double a;
    double b;
    double c;

    std::cout << "Ingrese el lado A:";
    std::cin >> a;

    std::cout << "Ingrese el lado B:";
    std::cin >> b;

    c = sqrt (pow(a,2) + pow(b,2));

    std::cout << "c: " << c;

    return 0;
}