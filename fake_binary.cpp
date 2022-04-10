// Given a string of digits,
// replace any digit below 5 with '0'
// any digit 5 and above with '1'. 
// Return the resulting string.

// Modifying var =============================================================

#include <iostream>

std::string fake_bin(std::string sample){
  for (int i = 0; i < sample.length(); i++)
  {
    sample[i] = ((sample[i] - '0') > 4) ? '1' : '0';
  }
  return sample;
}

int main(){

  const std::string sample = "125890";  
  std::cout << fake_bin(sample) << std::endl;

}

// Constant var ==============================================================

// #include<iostream>

// std::string fake_bin(const std::string sample) {
  
//   std::string solution;
//   for (char c : sample) {

//     if (c - '0' < 5) {
//       solution.push_back('0');
//     } else {
//       solution.push_back('1');
//     }
//   }
//   return solution;
// }

// int main(){

//   const std::string sample = "125890";  
//   std::cout << fake_bin(sample) << std::endl;

// }