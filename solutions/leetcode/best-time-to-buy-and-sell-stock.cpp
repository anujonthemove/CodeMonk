/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id best-time-to-buy-and-sell-stock
 * @problem_address
 *https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
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
        int maxPro = 0, minPrice = INT_MAX;
        for (int price : prices) {
            minPrice = min(minPrice, price);
            maxPro = max(maxPro, price - minPrice);
        }
        return maxPro;
    }
};

int main(int argc, char *argv[]) { return 0; }
