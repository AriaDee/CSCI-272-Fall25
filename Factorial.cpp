#include <iostream>

int factorial(int x){
    int result = 1;
    for (int i = 1; i<= x; i++){
        result *= i;
    }
    return result;
}

int main()
{
    int number;
    std::cout<<"Enter a positive number: ";
    std::cin>>number;
    
    int result = factorial(number);
    
    
    std::cout<<"Factorial of "<<number<< " is "<<result<<std::endl;

    return 0;
}