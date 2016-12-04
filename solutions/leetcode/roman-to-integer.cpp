/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id roman-to-integer
 * @problem_address https://leetcode.com/problems/roman-to-integer/
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
    int romanToInt(string s) {
        vector<string> symbols = {"M",  "CM", "D",  "CD", "C",  "XC", "L",
                                  "XL", "X",  "IX", "V",  "IV", "I"};
        vector<int> digits = {1000, 900, 500, 400, 100, 90, 50,
                              40,   10,  9,   5,   4,   1};
        int res = 0;
        for (int i = 0; i < digits.size(); i++) {
            int digit = digits[i];
            string symbol = symbols[i];
            while (s.length() > 0) {
                if (s.find(symbol) == 0) {
                    s = s.substr(symbol.length());
                    res += digit;
                } else {
                    break;
                }
            }
        }
        return res;
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    cout << solution.romanToInt("XIII") << endl;
    return 0;
}
