/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id jump-game-ii
 * @problem_address https://leetcode.com/problems/jump-game-ii/
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
    int jump(vector<int> &nums) {
        int n = nums.size(), start = 0, end = 0, steps = 0;
        if (n <= 1) {
            return 0;
        }
        while (start <= end) {
            steps++;
            int furthest = end;
            for (int i = start; i <= end; i++) {
                furthest = max(furthest, i + nums[i]);
            }
            if (furthest >= n - 1) {
                return steps;
            }
            start = end + 1;
            end = furthest;
        }
        return 0;
    }
};

int main(int argc, char *argv[]) { return 0; }
