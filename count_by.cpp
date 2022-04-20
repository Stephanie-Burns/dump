// Create a function with two arguments 
// return an array of the first (n) multiples of (x).

// Assume both the given number and the number of times to count 
// are positive numbers greater than 0.

// Return the results as an array.

#include<iostream>
#include<vector>

std::vector<int> count_by(const int x, const int n) {
  
  std::vector<int> products;
  for (int i = 1; i <= n; i++) {
    products.push_back(i * x);
  }
  return products;
}


int main() {

  const int num = 2;
  const int times = 4;
  
  count_by(num, times);

}