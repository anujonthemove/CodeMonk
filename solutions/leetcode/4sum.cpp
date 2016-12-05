/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id 4sum
 * @problem_address https://leetcode.com/problems/4sum/
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
    vector<vector<int>> fourSum(vector<int> &nums, int target) {
        set<vector<int>> res;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int begin = j + 1, end = n - 1;
                while (begin < end) {
                    int a = nums[i], b = nums[j], c = nums[begin],
                        d = nums[end], sum = a + b + c + d;
                    if (sum == target) {
                        vector<int> item = {a, b, c, d};
                        res.insert(item);
                        begin++;
                        end--;
                    } else if (sum < target) {
                        begin++;
                    } else {
                        end--;
                    }
                }
            }
        }
        return vector<vector<int>>(res.begin(), res.end());
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> res = solution.fourSum(nums, target);
    for (vector<int> item : res) {
        for (int num : item) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
