#include <iostream>
int main(){
    int pivot=50, ubound=100, lbound=0;
    std::string comparison;
    bool found=false;
    std::cout << "Think of a number between 1 and 100 - I will try and read your mind!" << std::endl;
    while(found != true){
        std::cout << "Is your number the *same* as, *lesser* than or *greater* than " << pivot << std::endl;
        std::cin >> comparison;
        if(comparison == "lesser"){
            ubound = pivot;
            pivot = lbound + ((pivot-lbound)/2);
            
        }
        else if(comparison == "greater"){
            lbound = pivot;
            pivot = pivot + ((ubound-pivot)/2);
        }
        else{
            std::cout << "Found it! Your number was " << pivot;
            found = true;
        }
    }
}