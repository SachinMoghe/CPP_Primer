// my first pointer
#include <iostream>
using namespace std;

int main ()
{
  int firstvalue, secondvalue;
  int * mypointer;

  cout << "Just after declaration: mypointer is " << mypointer <<endl; 
  cout << "Just after declaration: firstvalue is " << firstvalue <<endl; 
  
  mypointer = &firstvalue;
  cout << "After address allocation: mypointer is " << mypointer <<endl; 
  cout << "After address allocation: *mypointer is " << *mypointer <<endl; 
  
  *mypointer = 10;
  
  mypointer = &secondvalue;
  *mypointer = 20;
  
  cout << "firstvalue is " << firstvalue << '\n';
  
  cout << "secondvalue is " << secondvalue << '\n';
  return 0;
}

/*
Notice that even though neither firstvalue nor secondvalue 
are directly set any value in the program, both end up with a value set indirectly through the use of mypointer. 
This is how it happens:

First, mypointer is assigned the address of firstvalue using the address-of operator (&). 
Then, the value pointed to by mypointer is assigned a value of 10. 
Because, at this moment, mypointer is pointing to the memory location of firstvalue, 
this in fact modifies the value of firstvalue.
*/