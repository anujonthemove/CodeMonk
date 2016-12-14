/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id longest-increasing-subsequence
 * @problem_address
 *https://leetcode.com/problems/longest-increasing-subsequence/
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
    int lengthOfLIS(vector<int> &nums) {
        int n = nums.size();
        if (n <= 0) {
            return 0;
        }
        int best = 1;
        vector<int> cache(n, 1);
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[j] < nums[i]) {
                    cache[i] = max(cache[i], cache[j] + 1);
                }
            }
            best = max(best, cache[i]);
        }
        return best;
    }
};

int main(int argc, char *argv[]) { return 0; }
