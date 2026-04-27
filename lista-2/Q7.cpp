#include <iostream>

main() {
    
    bool primo = true;
    int n = 0;
    
    std::cout << "Informe dois número:" << std::endl;
    
    int a;
    std::cin >> a;
    
    int b;
    std::cin >> b;
    
    if(a < b) {
        n =+ a;
    }
    else {
        n += b;
    }
    
    for(int i = 2; i <= n; i++) {
        
        if(a % i == 0 && b % i == 0) {
            primo = false;
        }
    }
    
    std::cout << std::boolalpha << primo << std::endl;

    return 0;
}