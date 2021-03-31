// Exercise 2.29 Uing the variables in the previous exercise, which of the
// following assignments are legal? Explain why.

# include <iostream> 

int main(){
    
    { //a
        int i;
        const int ic = 10;
        i = ic; //Legal
        cout::std << "i = " << i << cout::endl;
    
    }
    
    { //b
     int *p1; 
     //const int *const p3; //Uninitialzied p3
      //p1 = p3;  // Illegal, invalid converstion from const int * to int *
    }
    
    { //c
       int *p1;
       //const int ic; //This is a problem ic must be defined. Goes away when ic=10
       //p1 = &ic; // invalid converstion from const int * to int *
    }
    
    { //(d)
     //const int *const p3; //Illegal because p3 must be defined
     //const int ic; //Illegal because p1 must be defined
     //p3 = &ic; //Illegal
    }
    
    { // (e)
      //int *p1, *const p2; //Illegal p2 must be assigned
      //p2 = p1;
    }
    
    { // (f)
       //const int ic; //Illegal ic not initialized
       //const int *const p3; //Illegal p3 not initialized
       // ic = *p3; //Illegal assignment of read-only variable ic
    }
    
    
    return 0;
}