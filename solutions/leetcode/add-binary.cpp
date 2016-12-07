/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id add-binary
 * @problem_address https://leetcode.com/problems/add-binary/
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
    string addBinary(string a, string b) {
        if (a.length() > b.length()) {
            string tmp = a;
            a = b;
            b = tmp;
        }
        int m = a.length(), n = b.length(), i = 0;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        stringstream ss;
        int carry = 0;
        while (i < m) {
            int d1 = a[i] - '0', d2 = b[i] - '0';
            int num = d1 + d2 + carry;
            carry = num / 2;
            num %= 2;
            ss << num;
            i++;
        }
        while (i < n) {
            int d = b[i] - '0';
            int num = d + carry;
            carry = num / 2;
            num %= 2;
            ss << num;
            i++;
        }
        if (carry) {
            ss << carry;
        }
        string res = ss.str();
        reverse(res.begin(), res.end());
        return res;
    }
};

int main(int argc, char *argv[]) { return 0; }
