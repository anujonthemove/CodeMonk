/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id find-the-difference
 * @problem_address https://leetcode.com/problems/find-the-difference/
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
    char findTheDifference(string s, string t) {
        vector<int> counts(26, 0);
        for (char c : s) {
            counts[c - 'a']--;
        }
        for (char c : t) {
            counts[c - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (counts[i] == 1) {
                return 'a' + i;
            }
        }
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    cout << solution.findTheDifference("abcd", "abcde");
    return 0;
}
