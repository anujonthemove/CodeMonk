/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id 3sum
 * @problem_address https://leetcode.com/problems/3sum/
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
    vector<vector<int>> threeSum(vector<int> &nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for (int i = 0; i < n - 2; i++) {
            int num = nums[i];
            if (i > 0) {
                int pre = nums[i - 1];
                if (num == pre) {
                    continue;
                }
            }
            int begin = i + 1, end = n - 1;
            while (begin < end) {
                int num1 = nums[begin], num2 = nums[end],
                    sum = num + num1 + num2;
                if (sum == 0) {
                    res.push_back(vector<int>{num, num1, num2});
                    while (++begin <= end) {
                        if (nums[begin] != num1) {
                            break;
                        }
                    }
                    while (--end >= begin) {
                        if (nums[end] != num2) {
                            break;
                        }
                    }
                } else if (sum < 0) {
                    begin++;
                } else {
                    end--;
                }
            }
        }
        return res;
    }
};

int main(int argc, char *argv[]) {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    Solution solution;
    vector<vector<int>> res = solution.threeSum(nums);
    for (vector<int> item : res) {
        for (int num : item) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
