/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id decode-ways
 * @problem_address https://leetcode.com/problems/decode-ways/
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
    int numDecodings(string s) {
        int n = s.length(), ppre = 1, pre = 1;
        if (n <= 0) {
            return 0;
        }
        for (int i = 0; i < n; i++) {
            int now = 0;
            char ch = s[i];
            if ('1' <= ch && ch <= '9') {
                now += pre;
            }
            if (i >= 1) {
                int num = stoi(s.substr(i - 1, 2));
                if (10 <= num && num <= 26) {
                    now += ppre;
                }
            }
            ppre = pre;
            pre = now;
        }
        return pre;
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    cout << solution.numDecodings("111") << endl;
    return 0;
}
