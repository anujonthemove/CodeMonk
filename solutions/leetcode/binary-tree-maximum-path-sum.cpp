/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id binary-tree-maximum-path-sum
 * @problem_address https://leetcode.com/problems/binary-tree-maximum-path-sum/
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
    long long findBest(TreeNode *root, long long &best) {
        if (!root) {
            return INT_MIN;
        }
        long long left = findBest(root->left, best);
        long long right = findBest(root->right, best);
        long long res = max(max(left, right) + root->val, (long long)root->val);
        best = max(max(best, res), left + root->val + right);
        return res;
    }
    int maxPathSum(TreeNode *root) {
        long long best = INT_MIN;
        findBest(root, best);
        return best;
    }
};

int main(int argc, char *argv[]) { return 0; }
