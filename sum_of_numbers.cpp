// Description:
// Compute the series starting from 0 and ending until the given number.

// Example:
// Input: 6  Output: "0+1+2+3+4+5+6 = 21"
// Input: -15  Output: "-15<0"
// Input: 0  Output: "0=0"

#include <cmath>
#include <iostream>
#include <sstream>
#include <string>


std::string show_sequence(int count)
{
    int binomial_coefficient = (pow(count, 2) + count) / 2;
    std::stringstream ss("");

    if(!count)
    { 
        return "0=0";
    }

    if(count < 0) 
    {
        return std::to_string(count) + "<0";
    }

    for(int i = 0; i < count; i++)
    {
        ss << i << '+';
    }
    ss << count << " = " << binomial_coefficient;
 
    return ss.str();
}


int main()
{
    std::cout << show_sequence(6);
}