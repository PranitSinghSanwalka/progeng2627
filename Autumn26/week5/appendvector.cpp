#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout) {

    for(int i = 0; i<vin1.size(); i++) {
        vout.push_back(vin1[i]);
    }

    for(int i = 0; i<vin2.size(); i++) {
        vout.push_back(vin2[i]);
    }

}

int main() {
    std::vector<int> vin1, vin2, vout;

    vin1.push_back(2);
    vin1.push_back(3);
    vin1.push_back(5);
    vin1.push_back(28);
    vin1.push_back(22);
    vin2.push_back(4);
    vin2.push_back(28);
    vin2.push_back(29);

    append_vectors(vin1, vin2, vout);

    for(int i=0; i<vout.size(); i++) {
        std::cout << vout[i] << std::endl;
    }
    
}