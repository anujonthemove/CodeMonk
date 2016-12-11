/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id lowest-common-ancestor-of-a-binary-search-tree
 * @problem_address
 *https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
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
    vector<TreeNode *> getPath(TreeNode *root, TreeNode *node) {
        if (!root) {
            return vector<TreeNode *>();
        }
        if (root == node) {
            return vector<TreeNode *>{node};
        }
        vector<TreeNode *> left = getPath(root->left, node);
        vector<TreeNode *> right = getPath(root->right, node);
        if (left.size() > 0) {
            left.insert(left.begin(), root);
            return left;
        }
        if (right.size() > 0) {
            right.insert(right.begin(), root);
            return right;
        }
        return vector<TreeNode *>();
    }
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
        vector<TreeNode *> path1 = getPath(root, p);
        vector<TreeNode *> path2 = getPath(root, q);
        TreeNode *node = NULL;
        int m = path1.size(), n = path2.size();
        for (int i = 0; i < min(m, n); i++) {
            if (path1[i] == path2[i]) {
                node = path1[i];
            } else {
                break;
            }
        }
        return node;
    }
};

int main(int argc, char *argv[]) { return 0; }
