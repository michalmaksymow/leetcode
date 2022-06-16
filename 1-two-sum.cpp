#include <iostream>
#include <vector>
#include <map>
#include "utils.hpp"

using namespace std;

// Solution 1 - Brute force
// Time complexity: O(n^2)
// Space complexity: O(1)
class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> out;
        for (size_t i = 0; i < nums.size(); ++i) {
            for (size_t j = 0; j < nums.size(); ++j) {
                if (i == j)
                    continue;
                if (nums[i] + nums[j] == target) {
                    out.push_back(i);
                    out.push_back(j);
                    return out;
                }
            }
        }
        return out;
    }
};

// Solution 2 - Map
// Time complexity: O(n)
// Space complexity: O(n)
class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        map<int, int> num; // <number, index>
        vector<int> out;
        for (size_t i = 0; i < nums.size(); ++i) {
            int needed = target - nums[i];
            if (num.find(needed) != num.end()) {
                out.push_back(i);
                out.push_back(num[needed]);
                return out;
            }
            num.insert(make_pair(nums[i], i));
        }
        return out;
    }
};

int main() {
    Solution s;

    vector<int> input{ 2, 7, 11, 15 };

    cout << vectorToString(s.twoSum(input, 9)) << endl;
}
