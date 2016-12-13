/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id best-time-to-buy-and-sell-stock-ii
 * @problem_address
 *https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
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
        int n = prices.size(), profit = 0;
        for (int i = 0; i < n - 1; i++) {
            int gain = prices[i + 1] - prices[i];
            if (gain > 0) {
                profit += gain;
            }
        }
        return profit;
    }
};

int main(int argc, char *argv[]) { return 0; }
