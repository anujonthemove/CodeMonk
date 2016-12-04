/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id container-with-most-water
 * @problem_address https://leetcode.com/problems/container-with-most-water/
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
    int maxArea(vector<int> &heights) {
        int begin = 0, end = heights.size() - 1, best = 0;
        while (begin < end) {
            int h1 = heights[begin], h2 = heights[end],
                size = (end - begin) * min(h1, h2);
            best = max(best, size);
            if (h1 < h2) {
                begin++;
            } else if (h1 > h2) {
                end--;
            } else {
                begin++;
                end--;
            }
        }
        return best;
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    vector<int> heights = {1, 2, 3};
    cout << solution.maxArea(heights) << endl;
    return 0;
}
