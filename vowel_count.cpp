// Return the number (count) of vowels in the given string.
// We will consider a, e, i, o, u as vowels for this Kata (but not y).
// Input string will only consist of lower case letters and/or spaces.

#include <algorithm>
#include <iostream>
#include <set>
#include <string>


// Method One
bool is_vowel(char c) {
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int get_count_one(const std::string& input) {
  return count_if(input.begin(), input.end(), is_vowel);
}


// Method Two
int get_count_two(const std::string& input)
{    
    int num_vowels = 0;
    const std::set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    
    for(const char c : input)
    {
        if(vowels.find(c) != vowels.end())
        {
            ++num_vowels;
        }
    }
    return num_vowels;
}


int main()
{
    std::string sample = "I have vowels";
    std::cout << get_count_one(sample) << '\n';
    std::cout << get_count_two(sample) << '\n';
}