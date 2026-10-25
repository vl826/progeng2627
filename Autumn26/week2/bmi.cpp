#include <iostream>
#include <iomanip>
int main() {
    double weight, height, bmi;
    std::cout << "enter weight in kg:" << std::endl;
    std::cin >> weight;
    std::cout << "enter height in m:" << std::endl;
    std::cin >> height;
    bmi = weight / (height * height);
    std::cout << "your bmi is " << std::setprecision(3) << bmi << std::endl;
}