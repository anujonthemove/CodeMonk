/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id jump-game
 * @problem_address https://leetcode.com/problems/jump-game/
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
    bool canJump(vector<int> &nums) {
        int best = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            if (best < i) {
                return false;
            }
            best = max(best, i + nums[i]);
            if (best >= n - 1) {
                return true;
            }
        }
        return best >= n - 1;
    }
};

int main(int argc, char *argv[]) { return 0; }
