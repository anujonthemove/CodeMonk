/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id repeated-substring-pattern
 * @problem_address https://leetcode.com/problems/repeated-substring-pattern/
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
    bool repeatedSubstringPattern(string str) {
        int n = str.length(), half = n / 2;
        for (int i = 1; i <= half; i++) {
            if (n % i == 0) {
                int m = n / i;
                if (m == 1) {
                    continue;
                }
                bool found = true;
                for (int k = 0; k < m; k++) {
                    for (int j = 0; j < i; j++) {
                        if (str[k * i + j] != str[j]) {
                            found = false;
                            break;
                        }
                    }
                }
                if (found) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    cout << solution.repeatedSubstringPattern("abcabc") << endl;
    return 0;
}
