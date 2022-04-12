/* 
Complete the function that accepts a string parameter
reverses each word in the string. 
All spaces in the string should be retained.

Examples:

"This is an example!" ==> "sihT si na !elpmaxe"
"double  spaces"      ==> "elbuod  secaps" 
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


/* This implementation identifies the location of a specified delimiter.
In this case, that delimiter is hard coded to be isspace() (mostly 
to combat some gotchas in the challenge such as <0x0e>). It then applys 
the reverse method between the first at last occurance of that delimiter. */
std::string reverse_words(std::string str)
{
    std::string::iterator it;
    int index = 0;
    std::vector<int> pos_start = {0};
    std::vector<int> pos_end;


    for (it = str.begin() ; it < str.end(); it++, index++)
    {
        if(isspace(*it))
        {
            pos_end.push_back(index);
            pos_start.push_back(index + 1);
        }
    }

    pos_end.push_back(str.size());

    for(size_t i = 0; i < pos_start.size(); i++)
    {
        std::reverse(&str[pos_start[i]], &str[pos_end[i]]);
    }

    return str;    
}


int main()
{
    // std::string sample = "wXswZMduxXRLPlIG WjaDRGZsXNnzc ExpW DohzMsSyujunvbinBA gB JVaIOS ";
    // std::string sample = "The quick brown fox jumps over the lazy dog.";
    std::string sample = "a b c d";

    std::cout << reverse_words(sample);
}

