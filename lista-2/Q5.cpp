#include <iostream>

long long contadorDivisores(long long valor) {

    long long qtdDivisores = 0;

    for(int i = 1; i <= valor; i++) {

        if(valor % i == 0) {
            qtdDivisores++;
        }
    }

    return qtdDivisores;
}

int main() {
    std::cout << "Informe um valor:" << std::endl;

    long long valor;
    std::cin >> valor;

    long divisores = contadorDivisores(valor);

    std::cout << divisores << std::endl;

    return 0;
}