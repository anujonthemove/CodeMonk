/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id number-of-segments-in-a-string
 * @problem_address
 *https://leetcode.com/problems/number-of-segments-in-a-string/
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
    int countSegments(string s) {
        s += " ";
        int n = s.length(), res = 0;
        char pre, now;
        pre = s[0];
        for (int i = 1; i < n; i++) {
            now = s[i];
            if (pre != ' ' && now == ' ') {
                res++;
            }
            pre = now;
        }
        return res;
    }
};

int main(int argc, char *argv[]) { return 0; }
