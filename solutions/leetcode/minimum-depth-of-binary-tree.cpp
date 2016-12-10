/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id minimum-depth-of-binary-tree
 * @problem_address https://leetcode.com/problems/minimum-depth-of-binary-tree/
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
    int minDepth(TreeNode *root) {
        if (!root) {
            return 0;
        }
        if (!root->left && !root->right) {
            return 1;
        }
        int res = INT_MAX;
        if (root->left) {
            res = min(res, 1 + minDepth(root->left));
        }
        if (root->right) {
            res = min(res, 1 + minDepth(root->right));
        }
        return res;
    }
};

int main(int argc, char *argv[]) { return 0; }
