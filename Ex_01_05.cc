/* Exercise 1.5 Rewrite the program to write each operand */

# include <iostream>
int main() {
    
    /*Read 2 numbers*/
    std::cout <<"Enter 2 numbers" << std::endl;
    int V1=0, V2 = 0;  
    std::cin >> V1 >> V2 ;
    
    /* print the product*/
    std::cout << "The product of V1=";
    std::cout << V1; 
    std::cout << " and V2=";
    std::cout << V2;
    std::cout << " is " ; 
    std::cout << V1*V2 ;
    std::cout << std::endl;
    
    
    return 0;
}