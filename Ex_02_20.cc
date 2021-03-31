/* Exercise 2.20 What does this code do */
 
 # include <iostream> 
 
 int main(){
     
     int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;

     std::cout << "value of i is now = " << i << std::endl; //42^2
     
     
     
     return 0;
 }