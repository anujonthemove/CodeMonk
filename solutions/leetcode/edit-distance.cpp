/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id edit-distance
 * @problem_address https://leetcode.com/problems/edit-distance/
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
    int minDistance(string word1, string word2) {
        int m = word1.length(), n = word2.length();
        vector<vector<int>> cache(m + 1, vector<int>(n + 1, 0));
        for (int i = 1; i <= m; i++) {
            cache[i][0] = i;
        }
        for (int j = 1; j <= n; j++) {
            cache[0][j] = j;
        }
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (word1[i - 1] == word2[j - 1]) {
                    cache[i][j] = cache[i - 1][j - 1];
                } else {
                    cache[i][j] = min(cache[i - 1][j - 1],
                                      min(cache[i - 1][j], cache[i][j - 1])) +
                                  1;
                }
            }
        }
        return cache[m][n];
    }
};

int main(int argc, char *argv[]) { return 0; }
