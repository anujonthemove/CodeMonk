/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id construct-binary-tree-from-preorder-and-inorder-traversal
 * @problem_address
 *https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/
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
    TreeNode *build(vector<int> &preorder, vector<int> &inorder, int preBegin,
                    int preEnd, int inBegin, int inEnd) {
        if (preBegin > preEnd) {
            return NULL;
        }
        int num = preorder[preBegin];
        TreeNode *root = new TreeNode(num);
        int idx =
            find(inorder.begin() + inBegin, inorder.begin() + inEnd + 1, num) -
            inorder.begin();
        int len1 = idx - inBegin, len2 = inEnd - idx;
        root->left = build(preorder, inorder, preBegin + 1, preBegin + len1,
                           inBegin, inBegin + len1 - 1);
        root->right = build(preorder, inorder, preBegin + len1 + 1, preEnd,
                            idx + 1, inEnd);
        return root;
    }
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
        return build(preorder, inorder, 0, preorder.size() - 1, 0,
                     inorder.size() - 1);
    }
};

int main(int argc, char *argv[]) { return 0; }
