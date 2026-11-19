#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

// argc is the number of command line arguments
// argv is an array of C-style strings
// we'll see what this means more in detail later on

int main(int argc, char* argv[]){

    std::ifstream infile;

    infile.open(argv[1]);
    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string text;
    while(infile >> text) {
        std::cout << text << std::endl;
    }

    infile.close();

}
