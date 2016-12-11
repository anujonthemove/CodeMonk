/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id number-of-boomerangs
 * @problem_address https://leetcode.com/problems/number-of-boomerangs/
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
    int numberOfBoomerangs(vector<pair<int, int>> &points) {
        int n = points.size(), res = 0;
        for (int i = 0; i < n; i++) {
            pair<int, int> p1 = points[i];
            map<int, int> counts;
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    continue;
                }
                int d = pow(p1.first - points[j].first, 2) +
                        pow(p1.second - points[j].second, 2);
                counts[d]++;
            }
            for (auto count : counts) {
                res += count.second * (count.second - 1);
            }
        }
        return res;
    }
};

int main(int argc, char *argv[]) { return 0; }
