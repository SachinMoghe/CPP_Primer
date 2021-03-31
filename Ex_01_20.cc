/* 
Copy that file "Sales_item.h" to your
working directory. Use it to write a program that reads a set of book sales
transactions, writing each transaction to the standard output.
*/
#include <iostream> 
#include "Sales_item.h"


int main()
{
    Sales_item item1;
    // read ISBN, number of copies sold, and sales price
    while (std::cin >> item1)
    {
        // write ISBN, number of copies sold, and sales price
        std::cout << item1.isbn() << " "<< item1.avg_price() << std::endl;
    }

    
    return 0;
}