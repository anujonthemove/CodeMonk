/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id combination-sum
 * @problem_address https://leetcode.com/problems/combination-sum/
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
    vector<vector<int>> combinationSum(vector<int> &nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int>::iterator it = unique(nums.begin(), nums.end());
        nums.resize(it - nums.begin());
        vector<vector<int>> solutions;
        vector<int> solution;
        if (nums.size() <= 0) {
            return solutions;
        }
        getCombinations(nums, target, 0, solution, solutions);
        return solutions;
    }
    void getCombinations(vector<int> &nums, int target, int start,
                         vector<int> &solution,
                         vector<vector<int>> &solutions) {
        if (target == 0) {
            solutions.push_back(solution);
            return;
        }
        int n = nums.size();
        if (start < n) {
            int num = nums[start];
            if (num <= target) {
                solution.push_back(num);
                getCombinations(nums, target - num, start, solution, solutions);
                solution.pop_back();
            }
            getCombinations(nums, target, start + 1, solution, solutions);
        }
    }
};

int main(int argc, char *argv[]) { return 0; }
