#include <iostream>
#include <string>

int main() {
    double amt, er;
    std::cout << "enter amount in GBP" << std::endl;
    std::cin >> amt;
    std::cout << "enter currency exchange rate to euros" << std::endl;
    std::cin >> er;
    std::cout << "equivalent amount in euros is " << amt*er;
}