/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id two-sum
 * @problem_address https://leetcode.com/problems/two-sum/
 **/

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <iterator>
#include <map>
#include <queue>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

class Solution {
  public:
    vector<int> twoSum(vector<int> &nums, int target) {
        int n = nums.size();
        map<int, int> indices;
        for (int i = 0; i < n; i++) {
            int num2 = nums[i], num1 = target - num2;
            map<int, int>::const_iterator it = indices.find(num1);
            if (it != indices.end()) {
                return vector<int>{it->second, i};
            }
            indices[num2] = i;
        }
        return vector<int>();
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> indices = solution.twoSum(nums, target);
    for (int index : indices) {
        cout << index << endl;
    }
    return 0;
}
