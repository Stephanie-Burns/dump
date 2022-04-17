#include <iostream>
#include <vector>
#include <set>
#include <tuple>


std::set<std::tuple<int, int>> two_sum(
    const std::vector<int>& sample_arr, 
    const int& target
    )
// Given an array and target number, it finds all 2 pair combinations that sum
// to equal the target. Output is returned as a set of tuples i.e. {(0, 0)}

{
    std::set<int> seen;
    std::set<std::tuple<int, int>> output;
    
    if(sample_arr.size() < 2)
    {
        return {};
    }

    for(const int n : sample_arr)
    {
        int x;
        x = target - n;

        if(seen.find(x) != seen.end())
        {
            seen.insert(n);
        }

        else
        {
            output.insert(std::make_tuple(std::min(n, x), std::max(n, x)));
        }

    }

    return output;
}


int main()
{
    // Testing
    std::vector sample = {1,3,2,2};
    int target = 4;

    for(const std::tuple i : two_sum(sample, target))
    {
        std::cout << std::get<0>(i);
        std::cout << std::get<1>(i) << '\n';
    }
}
