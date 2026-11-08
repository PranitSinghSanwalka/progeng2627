#include <iostream>
#include <string>
int main() {
    int n = -1, max = 0;
    std::cout << "please enter number" << std::endl;
    std::cin >> n;
    max = n;
    while(n!=0) {
        std::cin >> n;
        std::cout << "maximum so far: " << max << std::endl;
        if(n>max) {
            max = n;
        }
    }

}