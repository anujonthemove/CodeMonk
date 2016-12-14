/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id Unique-Binary-Search-Trees-II
 * @problem_address https://leetcode.com/problems/Unique-Binary-Search-Trees-II/
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
    vector<TreeNode *> getTrees(int begin, int end) {
        vector<TreeNode *> trees;
        if (begin > end) {
            trees.push_back(NULL);
        } else {
            for (int num = begin; num <= end; num++) {
                vector<TreeNode *> leftTrees = getTrees(begin, num - 1);
                vector<TreeNode *> rightTrees = getTrees(num + 1, end);
                for (TreeNode *leftTree : leftTrees) {
                    for (TreeNode *rightTree : rightTrees) {
                        TreeNode *root = new TreeNode(num);
                        root->left = leftTree;
                        root->right = rightTree;
                        trees.push_back(root);
                    }
                }
            }
        }
        return trees;
    }
    vector<TreeNode *> generateTrees(int n) {
        if (n == 0) {
            return vector<TreeNode *>();
        }
        return getTrees(1, n);
    }
};

int main(int argc, char *argv[]) { return 0; }
