#include <iostream>

int main(){
    std::string input;
    bool stop=false;

    while(stop!=true){
        std::cin >> input;
        if((input == "STOP") || (input == "Stop") || (input == "stop")){
            stop = true;
        }
        else{
            std::cout << input << std::endl;
        }
    }
}