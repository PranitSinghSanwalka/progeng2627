#include <iostream>
#include <vector>
int search_vector(int n, const std::vector<int>& v) {
    for(int i=0; i<v.size(); i++) {
        if(v[i] == n) {
            return i;
        }
    }

    return -1;

}

int main() {
    std::vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(3);
    v.push_back(10);
    v.push_back(4);
    int n=4;

    std::cout << search_vector(n, v);
}

