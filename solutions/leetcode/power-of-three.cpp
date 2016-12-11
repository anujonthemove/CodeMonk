/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id power-of-three
 * @problem_address https://leetcode.com/problems/power-of-three
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
    bool isPowerOfThree(int n) {
        return n > 0 && n == pow(3, round(log(n) / log(3)));
    }
};

int main(int argc, char *argv[]) { return 0; }
