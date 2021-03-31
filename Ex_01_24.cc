/* 
  *Exercise 1.24: Write a program that reads several transactions and counts
  *how many transactions occur for each ISBN. 
  * ITEMS MUST APPEAR IN GROUPS in Input !!! Otherwise code does not work
*/
#include <iostream> 
#include "Sales_item.h"


int main()
{
    Sales_item item, itemRef; //itemRef is the each new item we comarep
    int n; //Counts the nummber for each loop
    // read ISBN, number of copies sold, and sales price
   
   if(std::cin >> itemRef){ //The outer loop for reference item
    n = 1; //Reset for each new item read
    std::cout << " To see how many times is if implemented, Initialzing n = " << n << std::endl; //Just to see how many times is this implemented
    while(std::cin >> item){ //Read the input from top to bottom, each time
        if(item.isbn() == itemRef.isbn())
            ++n;
        else{ //I've hit the 2nd block, 3rd block 
            std::cout << itemRef.isbn() << ", Count of this item=" << n << std::endl; //print whatever was detected
            itemRef = item;
            n = 1;
        }
    }
    std::cout << itemRef.isbn() << ", Count of this item=" << n << std::endl;
   }
    
    return 0;
} 

