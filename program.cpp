#include<iostream>

long long silnia(long n){
    long long silnia = 1;
    for(unsigned i = 2; i <= n;i++){
        silnia*=i;
    }
    return silnia;
}


int main(void){

    int n;

    std::cin>>n;
    std::cout<<silnia(n);

    return 0;
}