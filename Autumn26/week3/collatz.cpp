#include <iostream>
#include <string>

int main() {

    int n, max = 0, steps = 0;

    std::cin >> n;

    while(n!=1) {
        steps = steps+1;
        if(max < n) {
            max = n;
        }

        if(n%2==0) {
            n=n/2;
        }
        else {
            n=3*n+1;
        }
        std::cout << n << " ";
    }

    std::cout << std::endl << max << steps;
}