#include <iostream>

int fun(int n)
{
    if (n == 4)
       return n;
    else return 2 * fun(n + 1);
}

int main()
{
   std::cout << fun(2);
   return 0;
}