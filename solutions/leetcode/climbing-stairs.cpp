/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id climbing-stairs
 * @problem_address https://leetcode.com/problems/climbing-stairs/
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
    int climbStairs(int n) {
        if (n == 0)
            return 0;
        int n1 = 0, n2 = 1;
        for (int i = 1; i <= n; i++) {
            n2 = n1 + n2;
            n1 = n2 - n1;
        }
        return n2;
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    cout << solution.climbStairs(1) << endl;
    return 0;
}
