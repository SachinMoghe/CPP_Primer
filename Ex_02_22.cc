/* Exercise 2.22 p is a pointer to integer */
 
 # include <iostream> 
 
 int main(){
     
    int *p;;
     
     if(p)
         std::cout << "p is non-zero and p="<< p<< std::endl;
     else
         std::cout << "p is Zero" <<std::endl;
     
     if(*p)
         std::cout << "*p is non-zero and *p=" << *p <<std::endl;
     else
         std::cout << "*p is Zero" <<std::endl;
     
     return 0;
 }