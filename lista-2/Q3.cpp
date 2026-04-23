/*

// VERSÃO COM FLOAT

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {

    float pi = 3.14159;

    std::cout << "Informe um diametro com 5 casas decimais:" << std::endl;

    float diametro;
    std::cin >> diametro;

    float raio = diametro / 2;

    float a = pi * (raio * raio);

    std::cout << std::fixed << std::setprecision(5) << a << std::endl;

    return 0;
}
*/

// VERSÃO COM DOUBLE

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {

    double pi = 3.14159;

    std::cout << "Informe um diametro com 5 casas decimais:" << std::endl;

    double diametro;
    std::cin >> diametro;

    double raio = diametro / 2;

    double a = pi * (raio * raio);

    std::cout << std::fixed << std::setprecision(5) << a << std::endl;

    return 0;
}