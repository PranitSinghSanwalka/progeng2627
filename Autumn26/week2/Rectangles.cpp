#include <iostream>
#include <string>

int main() {
    double length, width;

    std::cout << "enter rectangle length" << std::endl;
    std::cin >> length;
    std::cout << "enter rectangle width" << std::endl;
    std::cin >> width;

    std::cout << "Area is " << length*width << " and perimeter is " << 2*(length+width);


}