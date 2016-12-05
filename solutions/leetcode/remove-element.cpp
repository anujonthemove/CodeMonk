/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id remove-element
 * @problem_address https://leetcode.com/problems/remove-element/
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
    int removeElement(vector<int> &nums, int val) {
        int n = nums.size(), count = 0;
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            if (num != val) {
                nums[count++] = num;
            }
        }
        return count;
    }
};

int main(int argc, char *argv[]) { return 0; }
