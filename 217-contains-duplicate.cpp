#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include "utils.hpp"

using namespace std;

// Solution 1 - Brute force
// Time complexity: O(n^2)
// Space complexity: O(1)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for (size_t i = 0; i < nums.size() - 1; ++i) {
            for (size_t j = i + 1; j < nums.size(); ++j) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false;
    }
};

// Solution 2 - Sort & Brute force
// Time complexity: O(n*log(n))
// Space complexity: O(1) (Not counting space required by std::sort)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        for (size_t i = 0; i < nums.size() - 1; ++i) {
            if (nums[i] == nums[i+1])
                return true;
        }
        return false;
    }
};

// Solution 3 - Ordered set comparison
// Time complexity: O(n)
// Space complexity: O(n)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::set<int> set;

        for (size_t i = 0; i < nums.size(); ++i) {
            if (set.find(nums[i]) != set.end()) 
                return true;
            set.emplace(nums[i]);
        }
        return false;
    }
};

int main() {
    Solution s;
    vector<int> input{1,1,1,3,3,4,3,2,4,2};

    cout << boolToString(s.containsDuplicate(input)) << endl;
}
