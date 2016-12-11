/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id invert-binary-tree
 * @problem_address https://leetcode.com/problems/invert-binary-tree
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
    TreeNode *invertTree(TreeNode *root) {
        if (!root) {
            return NULL;
        }
        TreeNode *right = invertTree(root->right);
        TreeNode *left = invertTree(root->left);
        root->left = right;
        root->right = left;
        return root;
    }
};

int main(int argc, char *argv[]) { return 0; }
