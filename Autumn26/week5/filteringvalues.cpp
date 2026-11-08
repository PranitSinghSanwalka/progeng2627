#include <iostream>
#include <vector>

int main () {
    int n, input, t;
    std::vector<int> v;
    std::cout << "enter number of values:" << std::endl;
    std::cin >> n;
    for(int i=0; i<n; i++) {
        std::cin >> input;
        v.push_back(input);
    } 

    std::cout << "enter value of t" << std::endl;
    std::cin >> t;
    for(int i=0; i<v.size(); i++) {
        if(v[i] < t) {
            std::cout << v[i] << std::endl;
        }
    }

}