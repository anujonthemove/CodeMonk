/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id guess-number-higher-or-lower
 * @problem_address https://leetcode.com/problems/guess-number-higher-or-lower/
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

int guess(int num);

class Solution {
  public:
    int guessNumber(int n) {
        long long begin = 1, end = n;
        while (begin <= end) {
            long long half = (begin + end) / 2;
            int g = guess(half);
            if (g == 0) {
                return half;
            } else if (g < 0) {
                end = half - 1;
            } else {
                begin = half + 1;
            }
        }
        return -1;
    }
};

int main(int argc, char *argv[]) { return 0; }
