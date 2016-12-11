/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id sum-of-left-leaves
 * @problem_address https://leetcode.com/problems/sum-of-left-leaves/
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
    int sum(TreeNode *root, bool left) {
        if (!root) {
            return 0;
        }
        if (!root->left && !root->right) {
            if (left) {
                return root->val;
            }
            return 0;
        }
        return sum(root->left, true) + sum(root->right, false);
    }
    int sumOfLeftLeaves(TreeNode *root) {
        if (!root) {
            return 0;
        }
        return sum(root->left, true) + sum(root->right, false);
    }
};

int main(int argc, char *argv[]) { return 0; }
