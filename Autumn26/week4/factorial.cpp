#include <iostream>

int myfactorial(int in){
// in is not a special name
// just a name

    int fact=1;

    for(int i = 1; i <=in; i++) {
        fact = fact*i;
    }

    return fact;
}

int main(){
    int n; 
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
}