#include <iostream>

int main(){
    double pounds, euros;
    std::cout << "enter money in pounds:" << std::endl;
    std::cin >> pounds;
    euros = pounds * 1.18;
    std::cout << "amount in euros is " << euros << std::endl;
}