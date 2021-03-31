# include <iostream>

int main(){

   int i = 4;
   int j = i++;
   int k = ++j;
   std::cout << i << j << k << std::endl;

return 0;
}