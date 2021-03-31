// Example illustrating use of const pointer

# include <iostream>

int main(){
    
    int i;
    
    //Example showing how pointer and the pointed object interact with each other
    {
        int *ip; //ip is a pointer to an object of type int
        ip = &i; //ip now holds the address
        i = 10; 
        std::cout <<"Dereference ip by, *ip = " <<*ip << std::endl;
        
        //Change the value of i = 10 to i = 20 using pointer
        *ip = 15; //Change the value of object pointed to by ip to 20
        std::cout <<"New value of i, i= " << i << std::endl;
        
    }
    
    //hat we are not allowed to change the value of the pointed-to item 
    {
        int ic1 = 20;
        const int *icp; //icp "thinks" the object is const
        icp = &ic1; //icp now holds the address of ic1 of type int.... no problem, icp "thinks" ic1 is const
        std::cout <<"What is ic1, *icp = " <<*icp << std::endl;
        
        *icp = 21; //Tryinto to change object ic1 will fail
        
        //Try to push a different address into icp
        const int ic2 = 25;
        icp = &ic2; //icp now holds the address of ic2
        std::cout <<"What is ic2, *icp = " <<*icp << std::endl;
        
       
    }
    {
    }
    
    {
        int ic4 = 30;
        const int *const iccp = &ic4;  // Once allocated, address cannot be changed within iccp
        std::cout <<"What is ic4, *iccp = " <<*iccp << std::endl;
        
        int ic5 = 35; 
        // iccp = &ic5; //Compliler error trying to change value of const iccp
        
       
    }
    
    return 0;
}