#include <iostream>

bool leap_year(int year){
    bool ly;
    if( (year % 4) == 0){ 
        if( (year % 100) == 0){ 
            if( (year % 400) == 0){ 
                ly = true;
            }
            else{
                ly = false;
            }

        }
        else{ 
            ly = true;
        }
    }
    else{
        ly = false;
    }
    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    // TODO: d1, m1, y1 are inputs 
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is meant to be the day after d1/m1/y1

    // function leap_year is useful for this task

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task

    // (this function should not print anything)
    bool stop;
    stop = false;
    y2 = y1;
    m2 = m1;
    while (stop == false) {
        if (m1 == 2) {
            if (leap_year(y1) == true) {
                if (d1 == 29) {
                    d2 = 1;
                    m2 = m1 + 1;
                    stop = true;
                }
                else {
                    d2 = d1 + 1;
                    stop = true;
                }
            }
            else {
                if (d1 == 28) {
                    d2 = 1;
                    m2 = m1 + 1;
                    stop = true;
                }
                else {
                    d2 = d1 + 1;
                    stop = true;
                }
            }
            stop = true;
        }
        if ((m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 )&& stop == false) {
            if (d1 == 31) {
                d2 = 1;
                m2 = m1 + 1;
                stop = true;
            }
            else {
                d2 = d1 + 1;
                stop = true;
            }
            stop = true;
        }
        if ((m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11) && stop == false) {
            if (d1 == 30) {
                d2 = 1;
                m2 = m1 + 1;
                stop = true;
            }
            else {
                d2 = d1 + 1;
                stop = true;
            }
            stop = true;
        }
        if (m1 == 12 && stop == false) {
            if (d1 == 31) {
                d2 = 1;
                m2 = 1;
                y2 = y1 +1;
                stop = true;
            }
            else {
                d2 = d1 + 1;
                stop = true;
            }
            stop = true;
        }
        stop = true;
    }
}

int main(){
    // TODO: write a main to test the function
    int d, m, y, nd, nm, ny;
    std::cout << "Enter the day, month and year: " << std::endl;
    std::cin >> d >> m >> y;
    next_date (d, m, y, nd, nm, ny);
    std::cout << "The next day is " << nd << "." << nm << "." << ny << std::endl;
}