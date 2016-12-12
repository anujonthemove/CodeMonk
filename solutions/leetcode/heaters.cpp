/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id heaters
 * @problem_address https://leetcode.com/problems/heaters/
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
    int findRadius(vector<int> &houses, vector<int> &heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        int m = houses.size(), n = heaters.size();
        int radius = 0, idx = 0;
        if (n <= 0) {
            return radius;
        }
        for (int i = 0; i < m; i++) {
            int house = houses[i];
            while (idx + 1 < n &&
                   abs(heaters[idx + 1] - house) <= abs(heaters[idx] - house)) {
                idx++;
            }
            radius = max(radius, abs(heaters[idx] - house));
        }
        return radius;
    }
};

int main(int argc, char *argv[]) { return 0; }
