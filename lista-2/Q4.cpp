#include <iostream>

int main() {

    int ultimoPoste;

    std::cout << "Informe a distância da rua:" << std::endl;
    int distanciaRua;
    std::cin >> distanciaRua;

    std::cout << "Informe a distância entre os postes:" << std::endl;
    int distanciaPostes;
    std::cin >> distanciaPostes;

    int qtdPostes = distanciaRua / distanciaPostes + 1;

    if(distanciaRua % distanciaPostes != 0) {
        ultimoPoste = distanciaRua % distanciaPostes;
    }
    else {
        ultimoPoste = distanciaPostes;
    }

    std::cout << qtdPostes << std::endl;
    std::cout << ultimoPoste << std::endl;

    return 0;
}