#include <iostream>

int main(){
    int a, b, q;
    std::cout << "enter two integers" << std::endl;
    std::cin >> a >> b;
    while(a >= b){
        a = a - b;
        q++;
    }
    std::cout << "the quotient is " << q << std::endl;
    std::cout << "the remainder is " << a << std::endl;
}