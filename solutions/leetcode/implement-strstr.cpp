/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id implement-strstr
 * @problem_address https://leetcode.com/problems/implement-strstr/
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
    int strStr(string haystack, string needle) {
        if (haystack == "" && needle == "") {
            return 0;
        }
        int m = haystack.length(), n = needle.length();
        for (int i = 0; i <= m - n; i++) {
            bool found = true;
            for (int j = 0; j < n; j++) {
                if (haystack[i + j] != needle[j]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                return i;
            }
        }
        return -1;
    }
};

int main(int argc, char *argv[]) { return 0; }
