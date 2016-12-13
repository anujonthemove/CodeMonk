/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id minimum-moves-to-equal-array-elements-ii
 * @problem_address
 *https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
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
    int minMoves2(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), sum = 0;
        int median =
            n % 2 == 0 ? (nums[n / 2 - 1] + nums[n / 2]) / 2 : nums[n / 2];
        for (int num : nums) {
            sum += abs(num - median);
        }
        return sum;
    }
};

int main(int argc, char *argv[]) { return 0; }
