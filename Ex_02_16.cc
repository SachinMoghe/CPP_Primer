// Exercise 2.16

# include <iostream> 

int main(){
    
    int i = 0, &r1 = i; double d = 0, &r2 = d;
    
    r2 = 3.14159; 
    std::cout <<"value of d= " << d << std::endl;
    
    r2 = r1; 
    std::cout <<"value of d= " << d << std::endl;
    
    i = r2; 
    std::cout <<"value of i= " << i << std::endl;
      
    r1 = d; 
    std::cout <<"value of i= " << i << std::endl;
    
    return 0;
    }