#include "utils.hpp"
#include <bits/stdc++.h>

using namespace std;

// Solution 1 - HashMap
// Time complexity: O(s)
// Space complexity: O(s+t)
class Solution {
public:
  bool isAnagram(string s, string t) {
    if (s.length() != t.length())
      return false;

    std::map<char, int> sm, tm;
    for (size_t i = 0; i < s.length(); ++i) {
      sm[s[i]]++;
      tm[t[i]]++;
    }

    for (auto const &key : sm) {
      if (tm.find(key.first) == tm.end() || tm[key.first] != key.second)
        return false;
    }
    return true;
  }
};

int main() {
  Solution s;
  string s1 = "rat";
  string s2 = "car";

  cout << boolToString(s.isAnagram(s1, s2)) << endl;
}
