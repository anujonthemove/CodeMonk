/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id combination-sum-ii
 * @problem_address https://leetcode.com/problems/combination-sum-ii/
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
    vector<vector<int>> combinationSum2(vector<int> &nums, int target) {
        sort(nums.begin(), nums.end());
        set<vector<int>> solutions;
        vector<int> solution;
        getCombinations(nums, target, 0, solution, solutions);
        vector<vector<int>> res;
        for (vector<int> item : solutions) {
            res.push_back(item);
        }
        return res;
    }
    void getCombinations(vector<int> &nums, int target, int start,
                         vector<int> &solution, set<vector<int>> &solutions) {
        if (target == 0) {
            solutions.insert(solution);
            return;
        }
        int n = nums.size();
        if (start < n) {
            int num = nums[start];
            if (num <= target) {
                solution.push_back(num);
                getCombinations(nums, target - num, start + 1, solution,
                                solutions);
                solution.pop_back();
            }
            getCombinations(nums, target, start + 1, solution, solutions);
        }
    }
};

int main(int argc, char *argv[]) { return 0; }
