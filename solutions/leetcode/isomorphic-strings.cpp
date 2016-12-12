/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id isomorphic-strings
 * @problem_address https://leetcode.com/problems/isomorphic-strings/
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
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        int n = s.length();
        map<char, char> mapping;
        for (int i = 0; i < n; i++) {
            char c1 = s[i], c2 = t[i];
            if (mapping.find(c1) == mapping.end()) {
                mapping[c1] = c2;
            } else {
                if (mapping[c1] != c2) {
                    return false;
                }
            }
        }
        mapping.clear();
        for (int i = 0; i < n; i++) {
            char c1 = t[i], c2 = s[i];
            if (mapping.find(c1) == mapping.end()) {
                mapping[c1] = c2;
            } else {
                if (mapping[c1] != c2) {
                    return false;
                }
            }
        }
        return true;
    }
};

int main(int argc, char *argv[]) { return 0; }
