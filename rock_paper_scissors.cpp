#include <iostream>
#include <map>
#include <string>
#include <set>
using namespace std;

string rps(const string& p1, const string& p2) 
{
    map<string, int> choice = {
    {"Rock",     1},
    {"Paper",    2},
    {"Scissors", 4}
  };
  set<int> winning_values = {-3, 1, 2};

  if (p1 == p2) {
      return "Draw!";
  }
  
  else if (winning_values.find(choice[p1] - choice[p2]) != winning_values.end()) {
      return "Player 1 won!";
  }
  
  else {
    return "Player 2 won!";
  }
}

int main() {
    cout << rps("Paper", "Paper") << endl;
    return 0;
}