/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id longest-palindrome
 * @problem_address https://leetcode.com/problems/longest-palindrome/
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
    int longestPalindrome(string word) {
        map<char, int> counts;
        for (char ch : word) {
            if (counts.find(ch) == counts.end()) {
                counts[ch] = 0;
            }
            counts[ch]++;
        }
        bool hasOdd = false;
        int res = 0;
        for (auto pair : counts) {
            int count = pair.second;
            if (count % 2 != 0) {
                hasOdd = true;
            }
            res += (count / 2) * 2;
        }
        if (hasOdd) {
            res++;
        }
        return res;
    }
};

int main(int argc, char *argv[]) { return 0; }
