/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id string-to-integer-atoi
 * @problem_address https://leetcode.com/problems/string-to-integer-atoi/
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
    int myAtoi(string str) {
        long long res = 0;
        int n = str.length(), i = 0;
        while (i < n) {
            char ch = str[i];
            if (ch == ' ') {
                i++;
            } else {
                break;
            }
        }
        int sign = 1;
        if (i < n) {
            char ch = str[i];
            if (ch == '-') {
                sign = -1;
                i++;
            } else if (ch == '+') {
                sign = 1;
                i++;
            }
        }
        while (i < n) {
            char ch = str[i];
            if (isdigit(ch)) {
                res = res * 10 + ch - '0';
                if (res * sign < INT_MIN) {
                    return INT_MIN;
                } else if (res * sign > INT_MAX) {
                    return INT_MAX;
                }
            } else {
                break;
            }
            i++;
        }
        return res * sign;
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    cout << solution.myAtoi(" -123") << endl;
    return 0;
}
