/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id first-missing-positive
 * @problem_address https://leetcode.com/problems/first-missing-positive/
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
    int firstMissingPositive(vector<int> &nums) {
        int n = nums.size(), i = 0;
        while (i < n) {
            int num = nums[i];
            if (num < 1 || num > n) {
                i++;
            } else if (num == i + 1) {
                i++;
            } else {
                if (nums[num - 1] == num) {
                    i++;
                } else {
                    nums[i] = nums[num - 1];
                    nums[num - 1] = num;
                }
            }
        }
        for (i = 0; i < n; i++) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }
        return n + 1;
    }
};

int main(int argc, char *argv[]) { return 0; }
