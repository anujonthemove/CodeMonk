/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id minimum-moves-to-equal-array-elements
 * @problem_address
 *https://leetcode.com/problems/minimum-moves-to-equal-array-elements/
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
    int minMoves(vector<int> &nums) {
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }
        int minNum = *min_element(nums.begin(), nums.end()), n = nums.size();
        return sum - minNum * n;
    }
};

int main(int argc, char *argv[]) { return 0; }
