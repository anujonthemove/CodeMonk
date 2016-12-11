/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id assign-cookies
 * @problem_address https://leetcode.com/problems/assign-cookies/
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
    int findContentChildren(vector<int> &greeds, vector<int> &sizes) {
        sort(greeds.begin(), greeds.end());
        sort(sizes.begin(), sizes.end());
        int m = greeds.size(), n = sizes.size(), i = 0, j = 0, res = 0;
        while (i < m && j < n) {
            int greed = greeds[i], size = sizes[j];
            if (greed <= size) {
                i++;
                res++;
            }
            j++;
        }
        return res;
    }
};

int main(int argc, char *argv[]) { return 0; }
