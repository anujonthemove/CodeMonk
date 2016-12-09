/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id binary-tree-level-order-traversal
 * @problem_address
 *https://leetcode.com/problems/binary-tree-level-order-traversal/
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
    void getRow(TreeNode *root, int h, vector<int> &row) {
        if (!root) {
            return;
        }
        if (h == 1) {
            row.push_back(root->val);
        } else {
            getRow(root->left, h - 1, row);
            getRow(root->right, h - 1, row);
        }
    }
    vector<vector<int>> levelOrder(TreeNode *root) {
        int h = 0;
        vector<vector<int>> res;
        while (true) {
            vector<int> row;
            getRow(root, ++h, row);
            if (row.size() <= 0) {
                break;
            }
            res.push_back(row);
        }
        return res;
    }
};

int main(int argc, char *argv[]) { return 0; }
