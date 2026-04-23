/*
#include <iostream>

int soma(int a, int b) {
    int resultado = a + b;

    return resultado;
}

int main() {

    std::cout << "Informe dois valores:" << std::endl;

    int a;
    std::cin >> a; 

    int b;
    std::cin >> b; 

    int resultadoSoma = soma(a, b); 
    std::cout << resultadoSoma << std::endl; 

    return 0;
}
*/

//VERSÃO CORRIGIDA COM O TIPO DE DADO LONG LONG

#include <iostream>


long long soma(long long a, long long b) {
    long long resultado = a + b;

    return resultado;
}


int main() {

    std::cout << "Informe dois valores:" << std::endl;

    long long a;
    std::cin >> a; // Entrada de dados

    long long b;
    std::cin >> b; //Entrada de dados

    long long resultadoSoma = soma(a, b); //Chama a função soma e declara os atributos
    std::cout << resultadoSoma << std::endl; //Imprime na tela o resultado da soma

    return 0;
}