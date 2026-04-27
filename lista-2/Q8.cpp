#include <iostream>

main() {
    
    int n = 0;
    int mdc = 0;
    
    std::cout << "Informe dois números:" << std::endl;
    
    int a;
    std::cin >> a;
    
    int b;
    std::cin >> b;
    
    if(a < b) {
        n += a;
    }
    else {
        n += b;
    }
    
    for(int i = 2; i <= n; i++) {
        
        if(a % i == 0 && b % i == 0) {
            mdc = i;
        }
    }
    
    std::cout << mdc << std::endl;

    return 0;
}