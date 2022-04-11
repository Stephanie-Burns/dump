// Whale Talk
// Takes a phrase like "turpentine and turtles"
// translate it into its “whale talk” equivalent, 
// "uueeieeauuee".

// There are a few simple rules for translating text to whale language:

// There are no consonants. Only vowels excluding the letter y.
// The u‘s and e‘s are extra long, so we must double them.

#include <iostream>
#include <set>
using namespace std;

string whale_talk(string& text){

  const set<char> vowls = {'a', 'e', 'i', 'o', 'u'}; 
  string whale;

  for (char& c: text) {
    if (vowls.find(c) != vowls.end()) {
      if (c == 'e' || c == 'u') {
      whale.push_back(c);  
      }

      whale.push_back(c);
    }
  }

  return whale;
}

int main () {

  string input = "turpentine and turtles";
  cout << whale_talk(input) << endl;

  return 0;
}