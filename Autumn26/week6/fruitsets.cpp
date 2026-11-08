#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>


int search_vector(std::string s, const std::vector<std::string>& vin) {
    for(int i =0; i<vin.size(); i++) {
        if(vin[i] == s) {
            return i;
        }
    }

    return -1;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {
    for(int i = 0; i<vin1.size(); i++) {
        if(search_vector(vin1[i], vout) == -1) {
            vout.push_back(vin1[i]);
        }
    }
    for(int i = 0; i<vin2.size(); i++) {
        if(search_vector(vin2[i], vout) == -1) {
            vout.push_back(vin2[i]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {
    
    for(int i = 0; i < vin1.size(); i++) {
        if(search_vector(vin1[i], vin2) != -1) {
            vout.push_back(vin1[i]);
        }
    }
}

int main() {
    std::vector<std::string> vin1, vin2, vunion, vinter;
    std::ifstream w1, w2;
    w1.open("warehouse1.txt");
    w2.open("warehouse2.txt");

    if(!w1.is_open() || !w2.is_open()) {
        return EXIT_FAILURE;
    }
    std::string fruit;
    while(w1 >> fruit) {
        vin1.push_back(fruit);
    }

    while(w2 >> fruit) {
        vin2.push_back(fruit);
    }

    w1.close();
    w2.close();

    union_vector(vin1, vin2, vunion);
    intersection_vector(vin1, vin2, vinter);
    std::ofstream uni, inter;
    uni.open("union.txt");
    inter.open("intersection.txt");

    if(!uni.is_open() || !inter.is_open()) {
        return EXIT_FAILURE;
    }

    
    for(int i = 0; i<vunion.size(); i++) {
        uni << vunion[i] << std::endl;
    }

    uni.close();

    for(int i = 0; i<vinter.size(); i++) {
        inter << vinter[i] << std::endl;
    }

    inter.close();
}