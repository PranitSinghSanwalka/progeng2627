#include <iostream>
#include <string>

int main(){

    double temp;
    std::string unit_in, unit_out;

    // we declare variables for the input and the output
    // the length is a number, the unit name is text

    std::cin >> temp >> unit_in;
    // we don't print a prompt, we just read the input

    if(unit_in == "F"){
        unit_out = "C";
        std::cout  << (temp-32)/1.8 << " " << unit_out;
    }
    else{
        unit_out = "F";
        std::cout  << (temp*9.0/5.0)+32.0 << " " << unit_out;
    }
}