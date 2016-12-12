/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id valid-palindrome
 * @problem_address https://leetcode.com/problems/valid-palindrome/
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
    bool isPalindrome(string s) {
        int n = s.length(), begin = 0, end = n - 1;
        while (begin < end) {
            char ch1, ch2;
            while (begin < n) {
                ch1 = s[begin];
                if (isalnum(ch1)) {
                    break;
                }
                begin++;
            }
            while (end >= 0) {
                ch2 = s[end];
                if (isalnum(ch2)) {
                    break;
                }
                end--;
            }
            if (begin >= end) {
                break;
            }
            if (tolower(ch1) != tolower(ch2)) {
                return false;
            }
            begin++;
            end--;
        }
        return true;
    }
};

int main(int argc, char *argv[]) { return 0; }
