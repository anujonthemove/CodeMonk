/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id scramble-string
 * @problem_address https://leetcode.com/problems/scramble-string/
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
  private:
    map<pair<string, string>, bool> cache;

  public:
    bool isScramble(string s1, string s2) {
        if (s1.length() != s2.length()) {
            return false;
        }
        if (s1 == s2) {
            return true;
        }
        pair<string, string> p(s1, s2);
        if (cache.find(p) != cache.end()) {
            return cache[p];
        }
        vector<int> counts(256, 0);
        for (char c1 : s1) {
            counts[c1]++;
        }
        for (char c2 : s2) {
            counts[c2]--;
        }
        bool scramble = true;
        for (int i = 0; i < 256; i++) {
            if (counts[i] != 0) {
                scramble = false;
                break;
            }
        }
        if (!scramble) {
            cache[p] = scramble;
            return scramble;
        }
        scramble = false;
        int n = s1.length();
        for (int len = 1; len < n; len++) {
            string s11 = s1.substr(0, len);
            string s12 = s1.substr(len);
            string s21 = s2.substr(0, len);
            string s22 = s2.substr(len);
            if (isScramble(s11, s21) && isScramble(s12, s22)) {
                scramble = true;
                break;
            }
            s21 = s2.substr(0, n - len);
            s22 = s2.substr(n - len);
            if (isScramble(s11, s22) && isScramble(s12, s21)) {
                scramble = true;
                break;
            }
        }
        cache[p] = scramble;
        return scramble;
    }
};

int main(int argc, char *argv[]) { return 0; }
