/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id word-pattern
 * @problem_address https://leetcode.com/problems/word-pattern/
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
    bool wordPattern(string pattern, string str) {
        str += " ";
        int m = pattern.length(), n = str.length();
        if (m == 0 || n == 0) {
            return false;
        }
        int idx = 0;
        map<char, string> mapping1;
        map<string, char> mapping2;
        for (int i = 0; i < m; i++) {
            char ch = pattern[i];
            if (idx >= n) {
                return false;
            }
            int blankIdx = str.find(' ', idx);
            if (blankIdx == string::npos || blankIdx == idx) {
                return false;
            }
            string part = str.substr(idx, blankIdx - idx);
            if (mapping1.find(ch) == mapping1.end()) {
                mapping1[ch] = part;
            }
            if (mapping2.find(part) == mapping2.end()) {
                mapping2[part] = ch;
            }
            if (mapping1[ch] != part || mapping2[part] != ch) {
                return false;
            }
            idx = blankIdx + 1;
        }
        return idx == n;
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    cout << solution.wordPattern("abab", "chicken beef chicken beef") << endl;
    return 0;
}
