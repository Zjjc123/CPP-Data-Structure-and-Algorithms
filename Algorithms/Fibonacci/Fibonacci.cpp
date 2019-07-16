#include <iostream>

int Fibonacci(int pos)
{
    if (pos == 0 || pos == 1)
    {
        return pos;
    }
    else
    {
        return Fibonacci(pos - 1) + Fibonacci(pos - 2);
    }
    
}

int main()
{
    int fib[100];
    for (int i = 0; i < 100; i++)
    {
        fib[i] = Fibonacci(i);
        std::cout << fib[i] << std::endl;
    }
    
}
/*
Fibonacci(5)
    Fibonacci(4) + Fibonacci(3)
        Fibonacci(3) + Fibonacci(2) + Fibonacci(2) + Fibonacci(1)
            Fibonacci(2) + Fibonacci(1) + Fibonacci(1) + Fibonacci(0) + Fibonacci(1) + Fibonacci(0) + return 1
                Fibonacci(1) + Fibonacci(0) + return 1 + return 1 + return 0 + return 1 + return 0 + 1
                    return 1 + return 0 + 1 + 1 + 0 + 1 + 0 + 1
                        5

 */