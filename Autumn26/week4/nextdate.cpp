#include <iostream>

bool leap_year(int year){
    bool ly;

    if( (year % 4) == 0){ 
        // if multiple of 4

        if( (year % 100) == 0){ 
            // if (also) multiple of 100

            if((year % 400) == 0) {
                ly = true;
            }

            else {
                ly = false; 
            }

        }
        else{ 
            // if not multiple of 100
            // (but still multiple of 4)
            ly = true;

        }
    }
    else{
        // if not multiple of 4
        ly = true;
    }

    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    if (d1 == 31 && m1 == 12) {
        d2 = 1;
        m2 = 1;
        y2 = y1+1;
    }

    else if (m1 == 1 ||m1 == 3||m1 == 5|| m1 == 7 || m1 == 8|| m1 == 10|| m1 == 12) {
        if(d1 == 31) {
            m2 = m1 + 1;
            d2 = 1;
        }
        else {
            d2=d1+1;
        }
    }
    else if (m1 == 4 ||m1 == 6||m1 == 9|| m1 == 11) {
        if(d1 == 30) {
            m2 = m1 + 1;
            d2 = 1;
        }
        else {
            d2=d1+1;
        }
    }
    else {
        if(leap_year(y1)) {
            if(d1 == 29) {
                m2 = m1+1;
                d2 = 1;
            }
            else {
                d2 = d1+1;
            }
        }
        else {
            if(d1 == 28) {
                m2 = m1+1;
                d2 = 1;
            }
            else {
                d2 = d1+1;
            }
        }
    }
}


int main(){
    int d1, d2, m1, m2, y1, y2;
    
    std::cout << "Enter the Date" << std::endl;
    std::cin >> d1 >> m1 >> y1;
    next_date(d1, m1, y1, d2, m2, y2);
    std::cout << "The next date is: " << d2 << "/" << m2 << "/" << y2 << "." << std::endl;

}