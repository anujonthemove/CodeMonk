/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id triangle
 * @problem_address https://leetcode.com/problems/triangle/
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
    int minimumTotal(vector<vector<int>> &triangle) {
        int m = triangle.size();
        if (m <= 0) {
            return 0;
        }
        int n = triangle[m - 1].size();
        if (n <= 0) {
            return 0;
        }
        vector<int> cache = triangle[m - 1];
        for (int i = 1; i <= m - 1; i++) {
            for (int j = 0; j < n - i; j++) {
                cache[j] = min(cache[j], cache[j + 1]) + triangle[m - 1 - i][j];
            }
        }
        return cache[0];
    }
};

int main(int argc, char *argv[]) { return 0; }
