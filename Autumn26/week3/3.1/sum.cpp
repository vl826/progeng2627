#include <iostream>

int main(){
    int num, sum=0;
    bool stop=false;
    while (stop!=true){
        std::cout << "enter a number:" << std::endl;
        std::cin >> num;
        if (num == 0){
            stop = true;
        }
        else{
            sum = sum + num;
            std::cout << "the sum so far is:" << std::endl;
            std::cout << sum << std::endl;
        }
        
    }
}