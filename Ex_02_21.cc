/* Exercise 2.21 Explain which is legal and illegal */
 
 # include <iostream> 
 
 int main(){
     
    int i = 0;
     
     // double* dp = &i; //Answer: illegal because types differ
     // int *ip = i; // Answer: illegal because ip should hold address.
     int *p = &i; // Answer: Legal
     
     return 0;
 }