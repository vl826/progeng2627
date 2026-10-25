#include <iostream>

int main(){
    int n, tot=1;
    std::cin >> n;
    for(int i=n; i>1; i--){
        tot = tot*n;
        n--;
    }
    std::cout << tot << std::endl;
}