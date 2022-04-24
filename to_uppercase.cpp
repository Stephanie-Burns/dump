// Write a function which converts the input string to uppercase.

// With import ================================================================

#include<algorithm>
#include<iostream>

std::string make_uppercase (const std::string& input_str) {
  std::string str = input_str;
  std::transform(str.begin(), str.end(), str.begin(), ::toupper);
  return str;
}

int main () {
  
  const std::string sample = "This sample is hawt!";
  std::cout << make_uppercase(sample) << std::endl;
}

// Without import ============================================================

// #include<iostream>

// std::string make_uppercase (const std::string& input_str) {

//   std::string solution;
//   for (char c : input_str) {
//     solution.push_back(char(toupper(c)));
//   }
//   return solution;
// }

// int main () {
  
//   const std::string sample = "This sample is hawt!";
//   std::cout << make_uppercase(sample) << std::endl;
// }
