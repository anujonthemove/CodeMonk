/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id dungeon-game
 * @problem_address https://leetcode.com/problems/dungeon-game/
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
    int calculateMinimumHP(vector<vector<int>> &dungeon) {
        int m = dungeon.size();
        if (m <= 0) {
            return 1;
        }
        int n = dungeon[0].size();
        if (n <= 0) {
            return 1;
        }
        vector<vector<int>> cache(m, vector<int>(n, 0));
        cache[m - 1][n - 1] = max(1 - dungeon[m - 1][n - 1], 1);
        for (int i = m - 2; i >= 0; i--) {
            cache[i][n - 1] = max(cache[i + 1][n - 1] - dungeon[i][n - 1], 1);
        }
        for (int j = n - 2; j >= 0; j--) {
            cache[m - 1][j] = max(cache[m - 1][j + 1] - dungeon[m - 1][j], 1);
        }
        for (int i = m - 2; i >= 0; i--) {
            for (int j = n - 2; j >= 0; j--) {
                cache[i][j] =
                    min(cache[i + 1][j], cache[i][j + 1]) - dungeon[i][j];
                cache[i][j] = max(cache[i][j], 1);
            }
        }
        return cache[0][0];
    }
};

int main(int argc, char *argv[]) { return 0; }
