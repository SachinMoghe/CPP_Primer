// Ex. 1.10 Write a program that prints 10 to 0 * Excersise 1.13
# include <iostream>

int main(){
    int val = 10;
    
  /*   while(val >= 0){
     *   std::cout << val << std::endl; 
     *  val--;
    } */
    
    //The following section satisfies 1.13
    for(val=10; val<=0; val--)
        std::cout << val << std::endl; 
 
    
    return 0;
    
}