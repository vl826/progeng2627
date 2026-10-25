#include <iostream>
int main(){
    double celsius, fahrenheit;
    std::cout << "enter temp in C:" << std::endl;
    std::cin >> celsius;
    fahrenheit = celsius * 9/5 + 32;
    std::cout << "temp in fahrenheit is " << fahrenheit << std::endl;
}