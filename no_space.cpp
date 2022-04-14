// Without import ============================================================

#include <iostream>
using namespace std;

string no_space(string text) {
  string without_spaces;

  for (char& c : text) {
    if (c != ' ') {
      without_spaces.push_back(c);
    }
  }
  return without_spaces;
}

int main () {

  string sample = "This has some spaces.  ";
  cout << no_space(sample) << endl;

}

// With import ===============================================================

// #include <iostream>
// #include <algorithm>
// using namespace std;

// string no_space(string text) {
//   text.erase(remove(text.begin(), text.end(), ' '), text.end());
//   return text;
// }

// int main () {

//   string sample = "This has some spaces.  ";
//   cout << no_space(sample) << endl;

// }

// With regex ================================================================

// #include <iostream>
// #include <regex>
// using namespace std;

// string no_space(string text) {
//   return regex_replace(text, regex(" "), "");
// }

// int main() {
//   string sample = "This has some spaces.  ";
//   cout << no_space(sample) << endl;  
// }