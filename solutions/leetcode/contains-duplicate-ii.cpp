/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id contains-duplicate-ii
 * @problem_address https://leetcode.com/problems/contains-duplicate-ii/
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
    bool containsNearbyDuplicate(vector<int> &nums, int k) {
        map<int, int> mapping;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (mapping.find(num) != mapping.end()) {
                if (i - mapping[num] <= k) {
                    return true;
                }
            }
            mapping[num] = i;
        }
        return false;
    }
};

int main(int argc, char *argv[]) { return 0; }
