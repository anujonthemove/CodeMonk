/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id trapping-rain-water
 * @problem_address https://leetcode.com/problems/trapping-rain-water/
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
    int trap(vector<int> &heights) {
        int res = 0;
        int n = heights.size();
        if (n <= 0) {
            return res;
        }
        vector<int> left(n), right(n);
        left[0] = heights[0];
        right[n - 1] = heights[n - 1];
        for (int i = 1; i < n; i++) {
            left[i] = max(left[i - 1], heights[i]);
        }
        for (int i = n - 2; i >= 0; i--) {
            right[i] = max(right[i + 1], heights[i]);
        }
        for (int i = 0; i < n; i++) {
            res += min(left[i], right[i]) - heights[i];
        }
        return res;
    }
};

int main(int argc, char *argv[]) { return 0; }
