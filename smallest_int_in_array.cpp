// Given an array of integers
// find the smallest integer.

// With import ===============================================================

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int find_smallest(const vector <int>& list) {
  return *min_element(list.cbegin(), list.cend());
}

int main() {

  vector<int> sample = {2, 15, 88, 35};
  cout << find_smallest(sample) << endl;

}

// Without import ============================================================

// #include <iostream>
// #include <vector>
// using namespace std;

// int find_smallest(const vector <int>& list) {
//   int smallest = list[0];

//   for (int i : list) {
//     if (i < smallest) {
//       smallest = i;
//     }
//   }
//   return smallest;
  
// }

// int main() {

//   vector<int> sample = {2, 15, 88, 35};
//   cout << find_smallest(sample) << endl;

// }