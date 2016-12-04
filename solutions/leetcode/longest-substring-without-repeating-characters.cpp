/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id longest-substring-without-repeating-characters
 * @problem_address
 *https://leetcode.com/problems/longest-substring-without-repeating-characters/
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
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if (n <= 0) {
            return 0;
        }
        vector<int> indices(256, -1);
        indices[s[0]] = 0;
        int begin = 0, end = 1, bestLen = 1;
        while (end < n) {
            char ch = s[end];
            begin = max(begin, indices[ch] + 1);
            int len = end - begin + 1;
            bestLen = max(bestLen, len);
            indices[ch] = end;
            end++;
        }
        return bestLen;
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    cout << solution.lengthOfLongestSubstring("abcabcbb") << endl;
    return 0;
}
