#include <iostream>

int main(){

    double x, n, rem=0;
    int counter = 0;

    std::cin >> x >> n;

    rem = x;

    while(rem >= n){
        rem = rem - n;
        counter = counter + 1;
    }

    std::cout << x << "/" << n <<  " = " << counter << " with remainder " << rem << std::endl;

    

}