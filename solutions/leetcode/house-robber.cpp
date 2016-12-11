/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id house-robber
 * @problem_address https://leetcode.com/problems/house-robber/
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
    int rob(vector<int> &nums) {
        int i = 0, e = 0;
        for (int num : nums) {
            int tmp = i;
            i = num + e;
            e = max(e, tmp);
        }
        return max(i, e);
    }
};

int main(int argc, char *argv[]) { return 0; }
