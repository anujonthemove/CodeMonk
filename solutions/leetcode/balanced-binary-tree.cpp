/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id balanced-binary-tree
 * @problem_address https://leetcode.com/problems/balanced-binary-tree/
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
    bool checkBalance(TreeNode *root, int &height) {
        height = 0;
        if (!root) {
            return true;
        }
        int h1, h2;
        bool leftBalance = checkBalance(root->left, h1);
        bool rightBalance = checkBalance(root->right, h2);
        height = 1 + max(h1, h2);
        return leftBalance && rightBalance && abs(h1 - h2) <= 1;
    }
    bool isBalanced(TreeNode *root) {
        int height;
        return checkBalance(root, height);
    }
};

int main(int argc, char *argv[]) { return 0; }
