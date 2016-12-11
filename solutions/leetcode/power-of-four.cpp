/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id power-of-four
 * @problem_address https://leetcode.com/problems/power-of-four/
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
    bool isPowerOfFour(int num) {
        if ((num & (num - 1)) != 0) {
            return false;
        }
        return (num & 0x55555555) > 0;
    }
};

int main(int argc, char *argv[]) { return 0; }
