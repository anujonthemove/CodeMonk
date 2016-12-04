/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id zigzag-conversion
 * @problem_address https://leetcode.com/problems/zigzag-conversion/
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
    string convert(string s, int numRows) {
        if (numRows <= 1) {
            return s;
        }
        vector<string> rows(numRows);
        int n = s.length(), addon = 1, pos = 0;
        for (int i = 0; i < n; i++) {
            char ch = s[i];
            rows[pos] += ch;
            int newPos = pos + addon;
            if (newPos >= numRows) {
                addon = -1;
            } else if (newPos < 0) {
                addon = 1;
            }
            pos += addon;
        }
        string converted;
        for (string row : rows) {
            converted += row;
        }
        return converted;
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    cout << solution.convert("PAYPALISHIRING", 3) << endl;
    return 0;
}
