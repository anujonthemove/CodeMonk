/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id two-sum-ii-input-array-is-sorted
 * @problem_address
 *https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
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
    vector<int> twoSum(vector<int> &numbers, int target) {
        int begin = 0, end = numbers.size() - 1;
        while (begin < end) {
            int sum = numbers[begin] + numbers[end];
            if (sum == target) {
                return vector<int>{begin + 1, end + 1};
            } else if (sum < target) {
                begin++;
            } else {
                end--;
            }
        }
        return vector<int>();
    }
};

int main(int argc, char *argv[]) { return 0; }
