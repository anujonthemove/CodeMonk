/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id word-break
 * @problem_address https://leetcode.com/problems/word-break/
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
    bool wordBreak(string s, unordered_set<string> &wordDict) {
        int n = s.length();
        vector<bool> cache(n + 1, true);
        for (int len = 1; len <= n; len++) {
            bool found = false;
            for (string word : wordDict) {
                int wordLen = word.length();
                if (wordLen > len) {
                    continue;
                }
                if (s.substr(len - wordLen, wordLen) == word &&
                    cache[len - wordLen]) {
                    found = true;
                    break;
                }
            }
            cache[len] = found;
        }
        return cache[n];
    }
};

int main(int argc, char *argv[]) { return 0; }
