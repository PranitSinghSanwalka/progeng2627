#include <iostream>

int main() {

    int h, l, m, ans;
    bool found = true;
    std::cin >> h >> l;

    while(found) {

        m = (h+l)/2;
        
        std::cout << "enter 0 if your number is " << m << ". Else, input 1 if it is higher and 2 if it is lower" << std::endl;
        std::cin >> ans;
        if(ans == 0) {
            break;
        }
        if(ans==1) {
            l=m;
        }
        else {
            h=m;
        }

    }

}