// Determine which are legal Exercise 2.27

# include <iostream> 

int main(){
    
    { //(a)
       // int i = -1, &r = 0; //Error a non-constant obe
        
        //error: cannot bind non-const lvalue 
        // reference of type 'int&' to an rvalue of type 'int'
    }
    
    { // (b)
      int i2;
      int *const p2 = &i2; //Legal because i2 is defined and address can be const
    }
    
    { //(c)
        const int i = -1, &r = 0; //Legal because now const &r is = 0 const
        std::cout << "Testing item (c). " <<"i = "<<i << ", r = " << r <<std::endl;
    }
    
    { //(d)  
      int i2;
      const int *const p3 = &i2; 
      /* Legal because ... reading right to left..... 
        &i2 is an address and this is ok for p3, which is a const pointer.
        and i2 is int but (*const p3) is of type const int. Alllocation is ok. 
      
      */
    }
    
    { // (e)
       int i2;
       const int *p1 = &i2; //ok
       /* Reading from right to left.....
          &i2 is address of i2 stored into p1, which is of the type const int
 
       */
    }
    
    { //(f)
      // const int &const r2; //Illegal 
      // Error 1: there is no top-level const for reference 
      // Error 2: a const reference must be initialized when defined.
       
    }
    
    { //(g)
        int i;
        const int i2 = i, &r = i;  // OK, with a warning of using undefined variable `i`
        std::cout <<  "Testing item (g). " << std::endl;
        //r = 5;  // Error: cannot change the value of `i` through `r`
        std::cout  << i << " " << i2 << " " << r << std::endl;  // Undefined Undefined Undefined Undefined
        i = 5;    // But the value can be changed directly
        std::cout << i << " " << i2 << " " << r << std::endl;  // 5  Undefined 5
        i = 10;   // And when visit through `r`, the new value is returned
        std::cout << i << " " << i2 << " " << r << std::endl;  // 10 Undefined 10
  }
    

    return 0;
} 