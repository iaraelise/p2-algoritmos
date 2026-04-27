#include <iostream>

int main() {
    
    int contador = 0;
    
    std::cout << "Informe um número: " << std::endl;
    
    int num;
    std::cin >> num;
    
    for(int i = 1; i <= num; i++) {
        
        if(num % i == 0) {
            contador++;
        }
    }
    
    if(contador == 2) {
        std::cout << "Verdadeiro" << std::endl;
    }
    else {
        std::cout << "Falso" << std::endl;
    }
    
    return 0;
}