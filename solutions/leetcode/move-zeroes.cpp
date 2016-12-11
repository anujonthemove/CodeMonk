/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id move-zeroes
 * @problem_address https://leetcode.com/problems/move-zeroes/
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
    void moveZeroes(vector<int> &nums) {
        int n = nums.size(), idx = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[idx++] = nums[i];
            }
        }
        for (; idx < n; idx++) {
            nums[idx] = 0;
        }
    }
};

int main(int argc, char *argv[]) { return 0; }
