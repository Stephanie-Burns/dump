#include <iostream>
#include <string>

using namespace std;

bool valid_year(int & year) {
  return to_string(year).length() == 4;
}

int main() {
  int year = 0;

  cout << "Enter the year you wish to check: " << endl;
  cin >> year;

  if (valid_year(year)) {
    if (year % 100 == 0 && year % 400 != 0) {
      cout << "No leap" << endl;
    } else if (year % 4 == 0) {
      cout << "leap" << endl;
    }
  }

}