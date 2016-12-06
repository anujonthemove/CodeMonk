/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id search-in-rotated-sorted-array
 * @problem_address
 *https://leetcode.com/problems/search-in-rotated-sorted-array/
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
    int getPivot(vector<int> &nums) {
        int n = nums.size(), start = 0, end = n - 1;
        while (start + 1 < end) {
            int middle = (start + end) / 2;
            int a = nums[start], b = nums[middle], c = nums[end];
            if (a <= b) {
                start = middle;
            } else {
                end = middle;
            }
        }
        if (nums[start] > nums[end]) {
            return end;
        }
        return 0;
    }
    int find(vector<int> &nums, int begin, int end, int target) {
        while (begin <= end) {
            int middle = (begin + end) / 2;
            int num = nums[middle];
            if (num == target) {
                return middle;
            } else if (num < target) {
                begin = middle + 1;
            } else {
                end = middle - 1;
            }
        }
        return -1;
    }
    int search(vector<int> &nums, int target) {
        int pivot = getPivot(nums);
        int r1 = find(nums, 0, pivot - 1, target);
        int r2 = find(nums, pivot, nums.size() - 1, target);
        return max(r1, r2);
    }
};

int main(int argc, char *argv[]) { return 0; }
