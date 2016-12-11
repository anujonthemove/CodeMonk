/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id contains-duplicate
 * @problem_address https://leetcode.com/problems/contains-duplicate/
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
    bool containsDuplicate(vector<int> &nums) {
        set<int> cache;
        for (int num : nums) {
            if (cache.find(num) != cache.end()) {
                return true;
            }
            cache.insert(num);
        }
        return false;
    }
};

int main(int argc, char *argv[]) { return 0; }
