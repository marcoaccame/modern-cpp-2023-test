



#include<iostream>


int main(int argc, char *argv[]) 
{
   std::cout << "Hello students of Modern C++ 2023" << std::endl;
   std::cout << "You should be able to compile, execute and debug this code:" << std::endl;

   int value = 0;
   const size_t N = 10;
   for(size_t i=0; i<N; i++)
   {
      value = i+7;
      std::cout << "At iteration " << i << " value is " << value << std::endl;
      value += 3; 
   }

   return 0;
}
