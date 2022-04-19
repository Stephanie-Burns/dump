#include <iostream>
#include <algorithm>

using namespace std;

bool is_palindrome(string text) {
  
  string forwards = text;

  reverse(text.begin(), text.end());
  
  if (forwards == text) {
    return true;
  }
  return false;
}

int main() {

  string text = "madaml";
  cout << is_palindrome(text) << endl;

}