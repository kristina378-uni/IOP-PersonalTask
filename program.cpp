#include<iostream>

int main(void){
    int n;

    std::cin>>n;
    if(n < 0){
        std::cout<<"Liczba ujemna\n";
        return 0;
    }

    std::cout << n;

    return 0;
}