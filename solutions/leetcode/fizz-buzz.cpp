/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id fizz-buzz
 * @problem_address https://leetcode.com/problems/fizz-buzz/
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
    vector<string> fizzBuzz(int n) {
        vector<string> rows;
        for (int i = 1; i <= n; i++) {
            stringstream ss;
            if (i % 3 == 0) {
                ss << "Fizz";
            }
            if (i % 5 == 0) {
                ss << "Buzz";
            }
            if (ss.str().length() <= 0) {
                ss << i;
            }
            rows.push_back(ss.str());
        }
        return rows;
    }
};

int main(int argc, char *argv[]) { return 0; }
