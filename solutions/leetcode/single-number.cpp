/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id single-number
 * @problem_address https://leetcode.com/problems/single-number/
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
    int singleNumber(vector<int> &nums) {
        int res = 0;
        for (int num : nums) {
            res ^= num;
        }
        return res;
    }
};

int main(int argc, char *argv[]) { return 0; }
