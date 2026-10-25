#include <iostream>

int main(){
    int n, cf=2;
    bool found_factor = false;

    std::cout << "please enter an integer greater than 1" << std::endl;

    std::cin >> n;

    while(found_factor == false && cf < (n/2)){
        if( (n % cf) == 0){ 

            found_factor = true;
        }
        cf++;
    }

    if(found_factor){
        std::cout << "the number is not prime" << std::endl;
    }
    else{
        std::cout << "the number is prime" << std::endl;
    }
}