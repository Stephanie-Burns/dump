// Determine if a given number is a perfect square.

#include <iostream>
#include <cmath>

bool is_square(int n)
{
    if(n > -1)
    {
        long long sr = sqrt(n);
        return (sr * sr == n);
    }
    return false;
}

int main()
{
    std::cout << is_square(4);
}