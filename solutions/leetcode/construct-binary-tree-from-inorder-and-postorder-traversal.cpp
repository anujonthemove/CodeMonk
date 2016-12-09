/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id construct-binary-tree-from-inorder-and-postorder-traversal
 * @problem_address
 *https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/
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
    TreeNode *build(vector<int> &inorder, vector<int> &postorder, int inBegin,
                    int inEnd, int postBegin, int postEnd) {
        if (inBegin > inEnd) {
            return NULL;
        }
        int num = postorder[postEnd];
        int idx =
            find(inorder.begin() + inBegin, inorder.begin() + inEnd + 1, num) -
            inorder.begin();
        int len1 = idx - inBegin, len2 = inEnd - idx;
        TreeNode *root = new TreeNode(num);
        root->left = build(inorder, postorder, inBegin, idx - 1, postBegin,
                           postBegin + len1 - 1);
        root->right = build(inorder, postorder, idx + 1, inEnd,
                            postBegin + len1, postEnd - 1);
        return root;
    }
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
        return build(inorder, postorder, 0, inorder.size() - 1, 0,
                     postorder.size() - 1);
    }
};

int main(int argc, char *argv[]) { return 0; }
