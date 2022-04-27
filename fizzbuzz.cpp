#include <iostream>

using namespace std;

void fizzbuzz(int start, const int stop) {
  if (start < 0 || stop < start) {
    cout << "Invalid input, try again." << endl;
    return;
  }

  for (start; start < stop + 1; start++) {

    if (start % 15 == 0) {
      cout << "FizzBuzz" << endl;
    } else if (start % 5 == 0) {
      cout << "Fizz" << endl;
    } else if (start % 3 == 0) {
      cout << "Buzz" << endl;
    } else {
      cout << start << endl;
    }
  }

}

int main() {
  fizzbuzz(1, 15);

  return 0;
}