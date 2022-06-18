#include "utils.hpp"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// Solution 1 - Conversion & iterative comparison
// Time complexity: O(n)
// Space complexity: O(n)
class Solution {
public:
  bool isPalindrome(string s) {
    stringstream ss;

    for (const char &c : s) {
      if (65 <= c && c <= 90)
        ss << (char)(c + 32);
      else if ((48 <= c && c <= 57) || (97 <= c && c <= 122))
        ss << c;
    }

    string formatted = ss.str();
    for (size_t i = 0; i < formatted.length() / 2; ++i) {
      if (formatted[i] != formatted[formatted.length() - i - 1])
        return false;
    }

    return true;
  }
};

class Solution {
public:
  bool isPalindrome(string s) {}
};

int main() {
  Solution s;
  string str = "0P";

  cout << boolToString(s.isPalindrome(str)) << endl;
}
