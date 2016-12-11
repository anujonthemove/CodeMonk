/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id arranging-coins
 * @problem_address https://leetcode.com/problems/arranging-coins/
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
    int arrangeCoins(int n) { return (int)(sqrt(2.0 * n + 0.25) - 0.5); }
};

int main(int argc, char *argv[]) { return 0; }
