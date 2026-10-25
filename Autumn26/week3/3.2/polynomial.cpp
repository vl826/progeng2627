#include <iostream>

int main(){
    int x,n,tot=1;
    std::cin >> x >> n;

    for(int i = 0; i < n; i++){
        tot = tot * x;
    }
    std::cout << tot << std::endl;
}