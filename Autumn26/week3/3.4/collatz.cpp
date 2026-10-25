#include <iostream>
int main (){
    int n, count, max;
    std::cout << "enter a number" << std::endl;
    std::cin >> n;
    max = 1;
    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
        }
        else{
            n = n * 3 + 1;
        }
        std::cout << n << " ";
        count++;
        if(n > max){
            max = n;
        }
    }
    std::cout << std::endl << "1 is reached in " << count << " steps" << std::endl;
    std::cout << "the maximum number generated in the process is " << max;
}