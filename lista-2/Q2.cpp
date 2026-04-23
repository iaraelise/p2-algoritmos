/*
#include <iostream>

int main() {

    std::cout << "Informe dois valores referente aos lados de um retângulo:" << std::endl;

    long long l1;
    std::cin >> l1;

    long long l2;
    std::cin >> l2;

    long long perimetro = 2 * (l1 + l2);

    std::cout << perimetro << std::endl;

    return 0;
}
*/

#include <iostream>

long long calcularPerimetro(long long l1, long long l2) {
    long long perimetro = 2 * (l1 + l2);

    return perimetro;
}

int main() {
    std::cout << "Informe dois valores referentes aos lados de um retângulo:" << std::endl;

    long long l1;
    std::cin >> l1;

    long long l2;
    std::cin >> l2;

    long long perimetro = calcularPerimetro(l1, l2);
    std::cout << perimetro << std::endl;

    return 0;
}