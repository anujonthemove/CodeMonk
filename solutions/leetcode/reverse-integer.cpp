/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id reverse-integer
 * @problem_address https://leetcode.com/problems/reverse-integer/
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
    int reverse(int x) {
        int sign = x >= 0 ? 1 : -1;
        x = abs(x);
        long long res = 0;
        while (x > 0) {
            res = res * 10 + x % 10;
            x /= 10;
        }
        res = sign * res;
        if (res < INT_MIN || res > INT_MAX) {
            return 0;
        }
        return res;
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    cout << solution.reverse(123) << endl;
    return 0;
}
