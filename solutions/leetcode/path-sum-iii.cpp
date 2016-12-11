/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id path-sum-iii
 * @problem_address https://leetcode.com/problems/path-sum-iii/
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
    int pathSumFromRoot(TreeNode *root, int sum) {
        if (!root) {
            return 0;
        }
        int count = 0;
        if (root->val == sum) {
            count = 1;
        }
        count += pathSumFromRoot(root->left, sum - root->val);
        count += pathSumFromRoot(root->right, sum - root->val);
        return count;
    }
    int pathSum(TreeNode *root, int sum) {
        if (!root) {
            return 0;
        }
        int count = 0;
        count = pathSumFromRoot(root, sum);
        return count + pathSum(root->left, sum) + pathSum(root->right, sum);
    }
};

int main(int argc, char *argv[]) { return 0; }
