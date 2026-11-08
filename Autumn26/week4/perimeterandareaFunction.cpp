#include <iostream>
#include <string>


void PandA(double length, double width, double& pmtr, double& area) {
    pmtr = 2*(length+width);
    area = length*width;
}

int main() {
    double length, width, pmtr, area;

    std::cout << "enter rectangle length" << std::endl;
    std::cin >> length;
    std::cout << "enter rectangle width" << std::endl;
    std::cin >> width;

    PandA(length, width, pmtr, area);

    std::cout << "Area is " << area << " and perimeter is " << pmtr;
}