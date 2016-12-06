/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id length-of-last-word
 * @problem_address https://leetcode.com/problems/length-of-last-word/
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
    int lengthOfLastWord(string s) {
        int count = 0, i = s.length();
        while (--i >= 0) {
            if (s[i] != ' ') {
                break;
            }
        }
        while (i >= 0) {
            if (s[i] == ' ') {
                break;
            }
            count++;
            i--;
        }
        return count;
    }
};

int main(int argc, char *argv[]) { return 0; }
