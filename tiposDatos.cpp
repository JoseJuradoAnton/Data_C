#include <iostream>

//typedef std::string text_t;

using text_t = std::string;
using numero_t = int;

int main() {
    
    text_t nombre = "hunting bug";
    numero_t edad = 10;

    std::cout<<nombre<<" "<<edad<<std::endl;

    return 0;
}