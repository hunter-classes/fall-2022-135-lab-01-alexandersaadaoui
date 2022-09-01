#include <iostream>

int main()
{
    int year;
    int common;
    int month;

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

    
    std::cout << "Enter month: ";
    std::cin >> month;

    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        std::cout << "31 days";
    }
    
    else if(month == 4 || month == 6 || month == 9 || month == 11){
        std::cout << "30 days";
    }

    else if(month == 2 && common == 0){
        std::cout << "29 days";
    }

    
    else{
        std::cout << "28 days";
    }

    return 0;

}