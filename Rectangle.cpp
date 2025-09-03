#include <iostream>

double calculateArea(double length, double width){
return length * width;
}

double calculatePermieter(double length, double width){
    return 2 * (length + width);
}

int main()
{
    double length, width;
    
    std::cout<<"Enter the length of the rectangle: ";
    std::cin>>length;
    
    std::cout<<"Enter the width of the rectangle: ";
    std::cin>>width;
    
    double area = calculateArea(length, width);
    double perimeter = calculatePermieter(length, width);
    
    std::cout<<"Area of the rectangle: "<<area<<std::endl;;
    
    std::cout<<"Perimeter of the rectangle: "<<perimeter<<std::endl;

    return 0;
}