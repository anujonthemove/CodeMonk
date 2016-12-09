/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id binary-tree-zigzag-level-order-traversal
 * @problem_address
 *https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
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
    void getRow(TreeNode *root, int height, vector<int> &row, bool ltr) {
        if (!root) {
            return;
        }
        if (height == 1) {
            row.push_back(root->val);
            return;
        }
        if (ltr) {
            getRow(root->left, height - 1, row, ltr);
            getRow(root->right, height - 1, row, ltr);
        } else {
            getRow(root->right, height - 1, row, ltr);
            getRow(root->left, height - 1, row, ltr);
        }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode *root) {
        vector<vector<int>> res;
        int h = 1;
        bool ltr = true;
        while (true) {
            vector<int> row;
            getRow(root, h, row, ltr);
            if (row.size() <= 0) {
                break;
            }
            res.push_back(row);
            h++;
            ltr = !ltr;
        }
        return res;
    }
};

int main(int argc, char *argv[]) { return 0; }
