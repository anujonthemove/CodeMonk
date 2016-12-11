/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id binary-tree-paths
 * @problem_address https://leetcode.com/problems/binary-tree-paths/
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
    vector<vector<int>> getPaths(TreeNode *root) {
        vector<vector<int>> paths;
        if (!root) {
            return paths;
        }
        if (!root->left && !root->right) {
            paths.push_back(vector<int>{root->val});
            return paths;
        }
        vector<vector<int>> leftPaths = getPaths(root->left);
        vector<vector<int>> rightPaths = getPaths(root->right);
        for (vector<int> path : leftPaths) {
            path.insert(path.begin(), root->val);
            paths.push_back(path);
        }
        for (vector<int> path : rightPaths) {
            path.insert(path.begin(), root->val);
            paths.push_back(path);
        }
        return paths;
    }
    vector<string> binaryTreePaths(TreeNode *root) {
        vector<vector<int>> intPaths = getPaths(root);
        vector<string> paths;
        for (vector<int> intPath : intPaths) {
            stringstream ss;
            int n = intPath.size();
            for (int i = 0; i < n; i++) {
                ss << intPath[i];
                if (i < n - 1) {
                    ss << "->";
                }
            }
            paths.push_back(ss.str());
        }
        return paths;
    }
};

int main(int argc, char *argv[]) { return 0; }
