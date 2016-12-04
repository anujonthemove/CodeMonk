/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id 3sum-closest
 * @problem_address https://leetcode.com/problems/3sum-closest/
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
    int threeSumClosest(vector<int> &nums, int target) {
        int n = nums.size();
        if (n < 3) {
            return 0;
        }
        int bestSum = nums[0] + nums[1] + nums[2],
            bestDiff = abs(bestSum - target);
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; i++) {
            int begin = i + 1, end = n - 1, num = nums[i];
            while (begin < end) {
                int sum = num + nums[begin] + nums[end];
                if (sum == target) {
                    return target;
                }
                int diff = abs(sum - target);
                if (diff < bestDiff) {
                    bestDiff = diff;
                    bestSum = sum;
                }
                if (sum < target) {
                    begin++;
                } else {
                    end--;
                }
            }
        }
        return bestSum;
    }
};

int main(int argc, char *argv[]) {
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;
    Solution solution;
    cout << solution.threeSumClosest(nums, target) << endl;
    return 0;
}
