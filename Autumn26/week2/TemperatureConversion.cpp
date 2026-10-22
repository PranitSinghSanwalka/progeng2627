#include <iostream>
#include <string>

int main() {
    double temp;

    std::cout << "enter temperature in celsius" << std::endl;
    std::cin >> temp;

    std::cout << "Temperature in fahrenheit is " << (temp*9.0/5.0)+32.0;
}