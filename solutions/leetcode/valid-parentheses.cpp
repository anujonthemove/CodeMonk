/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id valid-parentheses
 * @problem_address https://leetcode.com/problems/valid-parentheses/
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
    bool isValid(string s) {
        stack<char> tokens;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch == '(' || ch == '[' || ch == '{') {
                tokens.push(ch);
            } else {
                if (tokens.empty()) {
                    return false;
                }
                char token = tokens.top();
                tokens.pop();
                if (ch == ')') {
                    if (token != '(') {
                        return false;
                    }
                } else if (ch == ']') {
                    if (token != '[') {
                        return false;
                    }
                } else {
                    if (token != '{') {
                        return false;
                    }
                }
            }
        }
        return tokens.empty();
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    cout << solution.isValid("()") << endl;
    return 0;
}
