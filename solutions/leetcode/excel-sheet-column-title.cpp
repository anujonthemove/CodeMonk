/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id excel-sheet-column-title
 * @problem_address https://leetcode.com/problems/excel-sheet-column-title/
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
    string convertToTitle(int n) {
        string res;
        while (n) {
            int r = n % 26;
            n /= 26;
            if (r == 0) {
                res = 'Z' + res;
                n--;
            } else {
                res = (char)('A' + r - 1) + res;
            }
        }
        return res;
    }
};

int main(int argc, char *argv[]) { return 0; }
