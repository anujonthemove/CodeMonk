/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id happy-number
 * @problem_address https://leetcode.com/problems/happy-number/
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

int nextNum(int num) {
    int next = 0;
    while (num > 0) {
        next += (num % 10) * (num % 10);
        num /= 10;
    }
    return next;
}

class Solution {
  public:
    bool isHappy(int n) {
        set<int> nums;
        while (n != 1) {
            if (nums.find(n) != nums.end()) {
                return false;
            }
            nums.insert(n);
            n = nextNum(n);
        }
        return true;
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    cout << solution.isHappy(2) << endl;
    return 0;
}
