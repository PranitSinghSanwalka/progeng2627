#include <iostream>
#include <string>

int main() {
    double n1, n2, sum;

    std::cout << "please enter the first number" << std::endl;
    std::cin >> n1;
    
    std::cout << std::endl;

    std::cout << "please enter the second number" << std::endl;
    std::cin >> n2;

    sum = n1+n2;

    std::cout << std::endl;

    std::cout << n1 << " + " << n2 << " = " << sum;     
}