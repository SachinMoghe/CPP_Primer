// Exercise 2.15

# include <iostream>
int main(){
    
    int ival = 1.01;
    std::cout << "value of ival = " << ival << std::endl;
    
    // int &rval1 = 1.01; //Invalid
    
    int &rval2 = ival;
    std::cout << "value stored in rval2 = " << rval2 <<std::endl;
    
    //int &rval3; //Should come out invalid
    
    return 0;
}