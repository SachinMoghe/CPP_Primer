// Exercise 1.14: Testing execution speed on for-loop vs. while-loop
# include <iostream>
# include <bits/stdc++.h>
# include <cmath>
using namespace std;

void fun_for() 
{ 
    double x=0;
    int maxI = pow(2,31) - 1;
    for (int i=0; i<maxI; i++) 
    { 
        x++;
    } 
} 

void fun_while() 
{ 
    double x=0,i=0;
    int maxI = pow(2,31) - 1;
    while(i<maxI)
    {
        i++;
    }
    
}

int main(){
    
    int maxInt=(2^64)-1, V2=2^10;
    
    /* Time function returns the time since the  
        Epoch(jan 1 1970). Returned time is in seconds. */
    time_t start, end; 
  
    /* You can call it like this : start = time(NULL); 
     in both the way start contain total time in seconds  
     since the Epoch. */
     
     /*--------------- TEST the FOR LOOP  ----------*/
    time(&start); 
  
    // unsync the I/O of C and C++. 
    //ios_base::sync_with_stdio(false); 
  
    fun_for(); 
  
    // Recording end time. 
    time(&end); 
  
  
    // Calculating total time taken by the program. 
    double time_taken = double(end - start); 
    cout << "Time taken by FOR-LOOP is : " << fixed 
         << time_taken << setprecision(5); 
    cout << " sec " << endl; 
    
    
    
    /*--------------- TEST the WHILE LOOP  ----------*/
    time(&start); 
  
    // unsync the I/O of C and C++. 
    //ios_base::sync_with_stdio(false); 
  
    fun_while(); 
  
    // Recording end time. 
    time(&end); 
  
  
    // Calculating total time taken by the program. 
    time_taken = double(end - start); 
    cout << "Time taken by WHILE-LOOP is : " << fixed 
         << time_taken << setprecision(5); 
    cout << " sec " << endl; 
    
    
    
    
    return 0;
    
}