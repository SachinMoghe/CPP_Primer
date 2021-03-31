/* 
  * Exercise 1.21: Write a program that reads two Sales_item objects that
  * have the same ISBN and produces their sum..
*/
#include <iostream> 
#include "Sales_item.h"


int main()
{
    Sales_item item_sum, item, sum;
    int N_ITEMS=4;
    // read ISBN, number of copies sold, and sales price
    std::cin >> item_sum;
    for(int i=1; i<N_ITEMS; i++)
    {
         std::cin >> item;
         item_sum += item;
    } 
    
    std::cout << item_sum << std::endl;

    
    return 0;
}