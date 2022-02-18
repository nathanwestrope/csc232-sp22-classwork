#include <iostream>

/**
 * @brief 
 * 
 * @parm fib
 * @return int fib
 */

int fib(int n);
int main ()
{
    
    std::cout << "Hello, World!" << std::endl;
    for (int i{0}; i < 6; ++i)
    {
    std::cout << "fib(" << i << ")"<< fib(i) << std::endl;
    }
    return 0;
}

int fib(int n)
{
    if  (n == 0 or n == 1)
    {
        //base case
        return n; 
    }

    return  n - fib(n-1) + fib(n - 2);
}
