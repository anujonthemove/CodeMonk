/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id longest-common-prefix
 * @problem_address https://leetcode.com/problems/longest-common-prefix/
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
    string longestCommonPrefix(vector<string> &strs) {
        int n = strs.size();
        if (n <= 0) {
            return "";
        }
        string minStr = strs[0];
        if (n == 1) {
            return minStr;
        }
        for (string str : strs) {
            if (str.length() < minStr.length()) {
                minStr = str;
            }
        }
        int begin = 0, end = minStr.length() - 1, bestLen = 0;
        while (begin <= end) {
            int middle = (begin + end) / 2;
            string expected = minStr.substr(begin, middle - begin + 1);
            bool same = true;
            for (string str : strs) {
                if (expected != str.substr(begin, middle - begin + 1)) {
                    same = false;
                    break;
                }
            }
            if (same) {
                bestLen = middle + 1;
                begin = middle + 1;
            } else {
                end = middle - 1;
            }
        }
        return minStr.substr(0, bestLen);
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    vector<string> strs = {"abc", "ab", "abcd"};
    cout << solution.longestCommonPrefix(strs) << endl;
    return 0;
}
