#include <iostream>

int main(){
    double len1, len2, perimeter, area;
    std::cout << "enter length of one side: " << std::endl;
    std::cin >> len1;
    std::cout << "enter length of other side: " << std::endl;
    std::cin >> len2;
    perimeter = 2 * len1 + 2 * len2;
    area = len1 * len2;
    std::cout << "perimeter of rectangle is " << perimeter << std::endl;
    std::cout << "area of rectangle is " << area << std::endl;
}