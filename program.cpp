#include<iostream>

bool nieujemna(int n){
    return n>=0;
}


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

    if(!nieujemna(n)){
        std::cerr<<"Liczba jest ujemna";
        return 1;
    }
    
    std::cout<<silnia(n);

    return 0;
}