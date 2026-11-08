#include <iostream>

int smallest_factor(int n);

int main() { 
    int l, h;
    std::cout << "Enter lower bound and higher bound" << std::endl;
    std::cin >> l >> h;
    for(int i = l; i<=h; i++) {
        if(smallest_factor(i) == 0) {
            std::cout << i << std::endl;
        }
    }
    
}


int smallest_factor(int n) {

    for(int i = 2; i < n; i++) {
        if(n%i == 0) {
            return i;
        }
    }
    return 0;

}