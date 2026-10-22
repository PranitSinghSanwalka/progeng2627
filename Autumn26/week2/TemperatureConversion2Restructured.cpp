#include <iostream>
#include <string>

int main() {
    double temp;
    std::string unit_in, unit_out;
    bool valid = true;
    std::cin >> temp >> unit_in;

    if (unit_in == "F" || unit_in == "f") {
        temp = (temp-32)/1.8;
        unit_out = "C";
    }
    else {
        if(unit_in == "C" || unit_in == "c" ) {
            temp = (temp*9.0/5.0)+32.0;
            unit_out = "F";
        }

        else {
            valid = false;
        }
    }

    if(valid) {
        std::cout << temp << " " << unit_out;
    }
    else {
        std::cout << "error, unit not recognized";
    }

} 