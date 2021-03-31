/* Exercise 2.24 const exercises*/
 
 # include <iostream> 
 
 int main(){
     
    //const int buf; //Illegal
    int cnt = 0; 
    const int sz = cnt; 
    ++cnt; 
    //++sz; //Illegal
    
 }