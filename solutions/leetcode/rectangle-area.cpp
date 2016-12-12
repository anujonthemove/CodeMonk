/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id rectangle-area
 * @problem_address https://leetcode.com/problems/rectangle-area/
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
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int left = max(A, E), right = max(left, min(C, G));
        int bottom = max(B, F), top = max(bottom, min(D, H));
        return (C - A) * (D - B) - (right - left) * (top - bottom) +
               (G - E) * (H - F);
    }
};

int main(int argc, char *argv[]) { return 0; }
