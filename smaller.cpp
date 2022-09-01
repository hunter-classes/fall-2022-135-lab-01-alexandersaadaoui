#include <iostream>

int main()
{
    int firstNum;
    int secondNum;
    int greaterNum;
    
    std::cout << "Enter the first number: ";
    std::cin >> firstNum;
    std::cout << "Enter the second number: ";
    std::cin >> secondNum;
    
    if(firstNum <= secondNum){
        greaterNum = firstNum;
    }
    else {
        greaterNum = secondNum;
    }
    std::cout << "The smaller of the two is " << greaterNum;

    return 0;
}
