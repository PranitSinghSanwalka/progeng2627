#include <iostream>
#include <string>

int main() {
    double height, weight, bmi;
    std::cout << "enter your height" << std::endl;
    std::cin >> height;
    std::cout << "enter your weight" << std::endl;
    std::cin >> weight;
    bmi = weight/(height*height);
    std::cout << "your BMI is " << bmi;
}