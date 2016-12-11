/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id excel-sheet-column-number
 * @problem_address https://leetcode.com/problems/excel-sheet-column-number/
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
    int titleToNumber(string title) {
        int n = title.length(), base = 1, res = 0;
        for (int i = n - 1; i >= 0; i--) {
            res += base * (title[i] - 'A' + 1);
            base *= 26;
        }
        return res;
    }
};

int main(int argc, char *argv[]) { return 0; }
