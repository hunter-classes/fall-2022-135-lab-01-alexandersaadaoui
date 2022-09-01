#include <iostream>

int main()
{
    int firstNum;
    int secondNum;
    int thirdNum;
    int lowerNum;
    
    std::cout << "Enter the first number: ";
    std::cin >> firstNum;
    std::cout << "Enter the second number: ";
    std::cin >> secondNum;
    std::cout << "Enter the third number: ";
    std::cin >> thirdNum;
    
    if(firstNum <= secondNum){
        lowerNum = firstNum;
    }
    else {
        lowerNum = secondNum;
    }

    if(thirdNum <= lowerNum){
        lowerNum = thirdNum;
    }

    std::cout << "The smaller of the three is " << lowerNum;

    return 0;
}
