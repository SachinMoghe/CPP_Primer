// Determine which are legal Exercise 2.28. Explain the following definitions. Identify illegal

# include <iostream> 

int main(){
    
    { //(a)
       //int i, *const cp; //Illegal. const cp must be initialized
    }
    
    { //(b)
      //int *p1, *const p2; //Legal: declartion of (read right to left)
      // p1 as pointer to integer is legal
      // Illegal Uninitiazed const p2
      
    }
    
    { //(c)
      //const int ic, &r = ic; //Illegal because ic is not defined. 
    }
    
    { //(d)
      //const int *const p3; //Illegal. Uninitiazed const p3. 
      // Reading right to left: const pointer must be initialized. 
    }
     
     { //(e) 
        const int *p; //Legal. Just a declaration. 
     }
    return 0;
 }