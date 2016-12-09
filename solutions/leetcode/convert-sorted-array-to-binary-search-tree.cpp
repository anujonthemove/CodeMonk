/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id convert-sorted-array-to-binary-search-tree
 * @problem_address
 *https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
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
    TreeNode *build(vector<int> &nums, int begin, int end) {
        if (begin > end) {
            return NULL;
        }
        int middle = (begin + end) / 2;
        TreeNode *root = new TreeNode(nums[middle]);
        root->left = build(nums, begin, middle - 1);
        root->right = build(nums, middle + 1, end);
        return root;
    }
    TreeNode *sortedArrayToBST(vector<int> &nums) {
        return build(nums, 0, nums.size() - 1);
    }
};

int main(int argc, char *argv[]) { return 0; }
