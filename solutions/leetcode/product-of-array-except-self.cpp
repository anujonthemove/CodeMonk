/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id product-of-array-except-self
 * @problem_address https://leetcode.com/problems/product-of-array-except-self/
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
    vector<int> productExceptSelf(vector<int> &nums) {
        int n = nums.size();
        vector<int> res(n, 1);
        int fromBegin = 1, fromEnd = 1;
        for (int i = 0; i < n; i++) {
            res[i] *= fromBegin;
            fromBegin *= nums[i];
            res[n - 1 - i] *= fromEnd;
            fromEnd *= nums[n - 1 - i];
        }
        return res;
    }
};

int main(int argc, char *argv[]) { return 0; }
