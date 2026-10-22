#include <iostream>

int main(){

    bool run = true;
    double sum = 0;
    double num = 0
    double n = 0;
    while(run) {
        std::cin >> n;
        if(n==0) {
            run = false;
        }
        num = num + 1;
        sum = sum + n;
        std::cout << "the average so far is " << sum/num << std::endl;
    }
}
