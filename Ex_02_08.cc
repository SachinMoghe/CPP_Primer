/* 2.8 Using escape sequences, 
 * Part 1:write a program to print 2M followed by a newline. 
 * Part 2: Modify the program to print 2, then a tab, then an M, followed by a newline 
 */
# include <iostream>
int main(){
    
   
    // Part 1
    std::cout << "\62\115\n" <<std::endl;
    
    //Part 2
    std::cout << "\62\t\115\n" <<std::endl;
    
    return 0;
}