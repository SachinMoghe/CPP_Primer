/* Exercise 1.4 our program uses + to add 2 numbers. Print multiplication output */

# include <iostream>
int main() {
    
    /*Read 2 numbers*/
    std::cout <<"Enter 2 numbers" << std::endl;
    int V1=0, V2 = 0;  
    std::cin >> V1 >> V2 ;
    
    /* print the product*/
    std::cout << "The product of V1=" << V1 
    << " and V2=" << V2 << " = " << V1*V2 << std::endl;
    
    
    return 0;
}