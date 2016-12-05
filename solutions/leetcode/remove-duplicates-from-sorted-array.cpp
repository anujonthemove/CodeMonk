/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id remove-duplicates-from-sorted-array
 * @problem_address
 *https://leetcode.com/problems/remove-duplicates-from-sorted-array/
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
    int removeDuplicates(vector<int> &nums) {
        int n = nums.size();
        if (n <= 1) {
            return n;
        }
        int slow = 0, fast = 0;
        while (++fast < n) {
            if (nums[slow] < nums[fast]) {
                nums[++slow] = nums[fast];
            }
        }
        return slow + 1;
    }
};

int main(int argc, char *argv[]) { return 0; }
