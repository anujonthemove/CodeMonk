/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id unique-paths-ii
 * @problem_address https://leetcode.com/problems/unique-paths-ii/
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
    int uniquePathsWithObstacles(vector<vector<int>> &A) {
        int m = A.size();
        if (m == 0) {
            return 0;
        }
        int n = A[0].size();
        if (n == 0) {
            return 0;
        }
        vector<vector<int>> cache(m, vector<int>(n, 0));
        for (int i = m - 1; i >= 0; i--) {
            if (A[i][n - 1] == 0) {
                cache[i][n - 1] = 1;
            } else {
                break;
            }
        }
        for (int j = n - 1; j >= 0; j--) {
            if (A[m - 1][j] == 0) {
                cache[m - 1][j] = 1;
            } else {
                break;
            }
        }
        for (int i = m - 2; i >= 0; i--) {
            for (int j = n - 2; j >= 0; j--) {
                if (A[i][j] == 0) {
                    cache[i][j] = cache[i + 1][j] + cache[i][j + 1];
                }
            }
        }
        return cache[0][0];
    }
};

int main(int argc, char *argv[]) { return 0; }
