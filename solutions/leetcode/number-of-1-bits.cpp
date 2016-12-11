/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id number-of-1-bits
 * @problem_address https://leetcode.com/problems/number-of-1-bits/
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
    int hammingWeight(uint32_t n) {
        int res = 0;
        while (n > 0) {
            res += n % 2;
            n >>= 1;
        }
        return res;
    }
};

int main(int argc, char *argv[]) { return 0; }
