#include <iostream>

int main()
{
    int year;
    int common;

    std::cout << "Enter year: ";
    std::cin >> year;

    if(year % 4 != 0){
        common = 1;
    }
    else if (year % 100 != 0){
        common = 0;
    }
    else if(year % 400 != 0){
        common = 1;
    }
    else{
        common = 0;
    }

    if(common == 0){
        std::cout << "Leap year";
    }
    else{
        std::cout << "Common year";
    }

    return 0;

}