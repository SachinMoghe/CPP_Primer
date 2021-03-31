/* 2.9 
 Check the following definitions 
 */
# include <iostream>

int main(){
    
   
    // (a)
    // std::cin >> int input_value; //Wrong
    
    //correct way
    int input_value; 
    std::cin >> input_value; 
    std::cout << "Input value read = " << input_value <<std::endl;
    
    //(b)..... wrong compier error
    /* int i = { 3.14 }; 
    std::cout << " value of i = " << i <<std::endl;  */
    
    // (c) 
    // double salary = wage = 9999.99; 
    
    // (d)
   int j = 3.14; 
    std::cout << " value of j = " << j <<std::endl; 
    
    return 0;
}