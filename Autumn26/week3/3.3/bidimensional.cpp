#include <iostream>

int main(){
    int n, x=0, y=0;
    std::cin >> n;

    while(x < n){
        
        while(y < n){
            std::cout << "*";
            y++;
        }

        std::cout << std::endl;
        x++;
        y = 0;
    }
}