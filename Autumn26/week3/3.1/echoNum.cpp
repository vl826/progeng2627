#include <iostream>

int main(){
    int n;
    bool stop=false;

    while(stop!=true){
        std::cin >> n;
        if((-11 < n) && (n <11)){
            std::cout << n << std::endl;
        }
        else{
            n = true;
        }
    }
}