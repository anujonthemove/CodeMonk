/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id letter-combinations-of-a-phone-number
 * @problem_address
 *https://leetcode.com/problems/letter-combinations-of-a-phone-number/
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
    vector<string> letterCombinations(string digits) {
        vector<string> mapping = {"0",   "1",   "abc",  "def", "ghi",
                                  "jkl", "mno", "pqrs", "tuv", "wxyz"};
        int n = digits.size();
        if (n == 0) {
            return vector<string>();
        }
        vector<string> heads;
        string word = mapping[digits[0] - '0'];
        for (char ch : word) {
            heads.push_back(string(1, ch));
        }
        if (n == 1) {
            return heads;
        }
        vector<string> tails = letterCombinations(digits.substr(1));
        vector<string> res;
        for (string head : heads) {
            for (string tail : tails) {
                res.push_back(head + tail);
            }
        }
        return res;
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    vector<string> words = solution.letterCombinations("123");
    for (string word : words) {
        cout << word << endl;
    }
    return 0;
}
