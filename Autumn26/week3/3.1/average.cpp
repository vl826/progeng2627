#include <iostream>

int main(){
    int count=0;
    double num, tot=0.0, avg;
    bool stop=false;
    while(stop != true){
        std::cout << "enter a number:" << std::endl;
        std::cin >> num;
        if(num == 0){
            stop = true;
        }
        else{
            tot = tot + num;
            count = count + 1;
            avg = tot / count;
            std::cout << "the average so far is:" << std::endl;
            std::cout << avg << std::endl;
        }
    }
}