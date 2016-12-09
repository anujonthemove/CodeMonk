/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id symmetric-tree
 * @problem_address https://leetcode.com/problems/symmetric-tree/
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
    bool isSame(TreeNode *left, TreeNode *right) {
        if (!left && right)
            return false;
        if (!right && left)
            return false;
        if (!left && !right)
            return true;
        if (left->val != right->val)
            return false;
        return isSame(left->left, right->right) &&
               isSame(left->right, right->left);
    }
    bool isSymmetric(TreeNode *root) {
        if (!root)
            return true;
        return isSame(root->left, root->right);
    }
};

int main(int argc, char *argv[]) { return 0; }
