/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id best-time-to-buy-and-sell-stock-iii
 * @problem_address
 *https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/
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
    int maxProfit(vector<int> &prices) {
        int m = 2, n = prices.size(), best = 0;
        if (n <= 1) {
            return 0;
        }
        vector<vector<int>> cache(m + 1, vector<int>(n, 0));
        for (int i = 1; i <= m; i++) {
            int preMax = cache[i - 1][0] - prices[0];
            for (int j = 1; j < n; j++) {
                cache[i][j] = max(cache[i][j - 1], prices[j] + preMax);
                preMax = max(preMax, cache[i - 1][j] - prices[j]);
                best = max(best, cache[i][j]);
            }
        }
        return best;
    }
};

int main(int argc, char *argv[]) { return 0; }
