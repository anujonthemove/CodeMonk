/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id integer-to-roman
 * @problem_address https://leetcode.com/problems/integer-to-roman/
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
    string intToRoman(int num) {
        vector<string> symbols = {"M",  "CM", "D",  "CD", "C",  "XC", "L",
                                  "XL", "X",  "IX", "V",  "IV", "I"};
        vector<int> digits = {1000, 900, 500, 400, 100, 90, 50,
                              40,   10,  9,   5,   4,   1};
        string res;
        for (int i = 0; i < digits.size(); i++) {
            int digit = digits[i];
            string symbol = symbols[i];
            while (num >= digit) {
                res += symbol;
                num -= digit;
            }
        }
        return res;
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    cout << solution.intToRoman(123) << endl;
    return 0;
}
