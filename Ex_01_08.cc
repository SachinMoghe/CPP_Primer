// 1.8 Which are acceptable, if not show correct ones
# include <iostream> 

int main()
{
    std::cout << "/*"; //Correct
    std::cout << "*/"; //Correct
    //Wrong std::cout << /* "*/" */; 
    std::cout <<" /* */"; //Now correct 
    //Wrong std::cout << /* "*/" /* "/*" */;
    
    
    return 0;
    
}