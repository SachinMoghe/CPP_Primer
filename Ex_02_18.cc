/* Exercise 2.18 Write code to change the value of a pointer. 
 * Write code to change the value to which the pointer points. */
 
 # include <iostream> 
 
 int main(){
     
     int i=10,j=7;
     int *pi = &i;

     //Change the value of pointer. The pointer now points to j
     pi = &j;

     //Change value of j to 11
     *pi = 11; 
     std::cout << "value of j is now = " << j << std::endl;
     
     
     
     return 0;
 }