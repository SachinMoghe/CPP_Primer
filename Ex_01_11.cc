// Ex. 1.11 prompts the user for two integers.
// Print each number in the range specified by those two integers.
# include <iostream>

int main(){
    int V1=0, V2=0, val;
    
    std::cout << "Enter 2 numbers in increasing order" << std::endl;
    std::cin >> V1 >> V2;
    
    val = V1;
    while(val <= V2){
        std::cout << val << std::endl; 
        val++;
    }
    
    std::cout << "Following Satisfies Ex 1.13" << std::endl;
    //Satisfies 1.13 with for loop. 
    //Rewrite of Excertise 1.11
    for(val=V1; val <=V2; val++)
        std::cout << val << std::endl; 
    
    return 0;
    
}