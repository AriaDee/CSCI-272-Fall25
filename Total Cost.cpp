#include <iostream>

double calculateDiscount(double price, double discountPercent = 0){
    return price * (discountPercent/100);
}

double calculateTax(double price, double taxRate = 15){
        return price * (taxRate/100);
    }

double calculateTotalCost(double price, double discountPercent = 0, double taxRate = 15){
    double discount = calculateDiscount(price, discountPercent);
    double tax = calculateDiscount(price, discountPercent);
    return price - discount + tax;
}

int main()
{
    double price;
    
    std::cout<<"Enter the product price: ";
    std::cin>>price;
    
    double totalCost = calculateTotalCost(price);
    
    std::cout<<"Total cost: "<<totalCost<<std::endl;

    return 0;
}