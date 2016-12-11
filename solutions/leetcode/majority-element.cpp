/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id majority-element
 * @problem_address https://leetcode.com/problems/majority-element/
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
    int majorityElement(vector<int> &nums) {
        int n = nums.size(), major = nums[0], count = 1;
        for (int i = 1; i < n; i++) {
            int num = nums[i];
            if (count == 0) {
                major = num;
                count = 1;
            } else if (major == num) {
                count++;
            } else {
                count--;
            }
        }
        return major;
    }
};

int main(int argc, char *argv[]) { return 0; }
