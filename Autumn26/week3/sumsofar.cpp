#include <iostream>

int main(){

    bool run = true;
    int sum = 0;
    int n = 0; 
    while(run) {
        std::cin >> n;
        if(n==0) {
            run = false;
        }
        sum = sum + n;
        std::cout << "the sum so far is " << sum << std::endl;
    }
}
