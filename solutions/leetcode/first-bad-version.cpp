/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id first-bad-version
 * @problem_address https://leetcode.com/problems/first-bad-version/
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

bool isBadVersion(int version);

class Solution {
  public:
    int firstBadVersion(int n) {
        int begin = 1, end = n, bad = -1;
        while (begin <= end) {
            int middle = ((long long)begin + end) / 2;
            if (isBadVersion(middle)) {
                bad = middle;
                end = middle - 1;
            } else {
                begin = middle + 1;
            }
        }
        return bad;
    }
};

int main(int argc, char *argv[]) { return 0; }
