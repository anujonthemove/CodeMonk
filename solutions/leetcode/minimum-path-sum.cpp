/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id minimum-path-sum
 * @problem_address https://leetcode.com/problems/minimum-path-sum/
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
    int minPathSum(vector<vector<int>> &grid) {
        int m = grid.size();
        if (m == 0) {
            return 0;
        }
        int n = grid[0].size();
        if (n == 0) {
            return 0;
        }
        vector<vector<int>> cache = grid;
        for (int j = 1; j < n; j++) {
            cache[0][j] += cache[0][j - 1];
        }
        for (int i = 1; i < m; i++) {
            cache[i][0] += cache[i - 1][0];
            for (int j = 1; j < n; j++) {
                cache[i][j] += min(cache[i - 1][j], cache[i][j - 1]);
            }
        }
        return cache[m - 1][n - 1];
    }
};

int main(int argc, char *argv[]) { return 0; }
