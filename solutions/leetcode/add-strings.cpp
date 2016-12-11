/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id add-strings
 * @problem_address https://leetcode.com/problems/add-strings/
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
    string addStrings(string num1, string num2) {
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        stringstream ss;
        int m = num1.size(), n = num2.size(), i = 0, j = 0, carry = 0;
        if (m > n) {
            swap(num1, num2);
            swap(m, n);
        }
        while (i < m && j < n) {
            int sum = (num1[i] - '0') + (num2[j] - '0') + carry;
            carry = sum / 10;
            sum %= 10;
            ss << sum;
            i++, j++;
        }
        while (j < n) {
            int sum = num2[j] - '0' + carry;
            carry = sum / 10;
            sum %= 10;
            ss << sum;
            j++;
        }
        if (carry) {
            ss << carry;
        }
        string num = ss.str();
        reverse(num.begin(), num.end());
        return num;
    }
};

int main(int argc, char *argv[]) { return 0; }
