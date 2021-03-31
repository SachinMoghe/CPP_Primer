// Ex. 1.9 Write a program that sums numbers from 50 to 100
# include <iostream>

int main(){
    int val = 50, sum = 0;
    
    while(val <= 100){
        sum += val;
        val++;
    }
    
    std::cout << "Sum of numbers from 50 to 100 = " << sum << std::endl;
    
    return 0;
    
}