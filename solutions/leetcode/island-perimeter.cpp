/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id island-perimeter
 * @problem_address https://leetcode.com/problems/island-perimeter/
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
    int islandPerimeter(vector<vector<int>> &grid) {
        int res = 0;
        int m = grid.size();
        if (m <= 0) {
            return res;
        }
        int n = grid[0].size();
        if (n <= 0) {
            return res;
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    int i1 = i - 1, j1 = j;
                    if (i1 < 0 || i1 >= m || j1 < 0 || j1 >= n ||
                        grid[i1][j1] == 0) {
                        res++;
                    }
                    i1 = i + 1, j1 = j;
                    if (i1 < 0 || i1 >= m || j1 < 0 || j1 >= n ||
                        grid[i1][j1] == 0) {
                        res++;
                    }
                    i1 = i, j1 = j - 1;
                    if (i1 < 0 || i1 >= m || j1 < 0 || j1 >= n ||
                        grid[i1][j1] == 0) {
                        res++;
                    }
                    i1 = i, j1 = j + 1;
                    if (i1 < 0 || i1 >= m || j1 < 0 || j1 >= n ||
                        grid[i1][j1] == 0) {
                        res++;
                    }
                }
            }
        }
        return res;
    }
};

int main(int argc, char *argv[]) { return 0; }
