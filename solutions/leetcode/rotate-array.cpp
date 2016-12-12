/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id rotate-array
 * @problem_address https://leetcode.com/problems/rotate-array/
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
    void rotate(vector<int> &nums, int k) {
        int n = nums.size();
        k %= n;
        nums.insert(nums.begin(), nums.begin() + n - k, nums.end());
        nums.resize(n);
    }
};

int main(int argc, char *argv[]) { return 0; }
