// Exercise 3For each of the following declarations indicate whether the
 // object being declared has top-level or low-level const..
 
 # <iostream> 
 
 int main(){
     
     const int v2 = 0; //Top level because v2 is const 
     int v1 = v2; // v1 is non-const
     int *p1 = &v1;  //p1 is non-const 
     int  &r1 = v1;  //r1 is low level const
     const int *p2 = &v2; //lower level const because p2 "thinks" its object is const int. 
     const int *const p3 = &i; // both top level because p3 cannot be changed once assigned
     const int &r2 = v2; //low level
     
     return 0;
 }