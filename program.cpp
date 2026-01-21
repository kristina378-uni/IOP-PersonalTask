#include<iostream>

unsigned long long silnia(int n){
    if(n < 0){
        std::cerr << "Cant count factorial of negative number\n";
        return -1;
    }

    unsigned long long silnia = 1;
    for(unsigned i = 2; i <= n; i++){
        silnia *= i;
    }

    return silnia;
}

int main(void){
    
    int n;

    std::cin>>n;
    std::cout << silnia(n) << std::endl;

    return 0;
}