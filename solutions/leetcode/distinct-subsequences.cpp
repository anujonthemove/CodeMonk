/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id distinct-subsequences
 * @problem_address https://leetcode.com/problems/distinct-subsequences/
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
    int numDistinct(string s, string t) {
        int m = s.length(), n = t.length();
        vector<vector<int>> cache(m + 1, vector<int>(n + 1, 0));
        cache[0][0] = 1;
        for (int i = 1; i <= m; i++) {
            cache[i][0] = 1;
            for (int j = 1; j <= n; j++) {
                cache[i][j] = cache[i - 1][j];
                if (s[i - 1] == t[j - 1]) {
                    cache[i][j] += cache[i - 1][j - 1];
                }
            }
        }
        return cache[m][n];
    }
};

int main(int argc, char *argv[]) { return 0; }
