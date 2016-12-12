/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id range-sum-query-immutable
 * @problem_address https://leetcode.com/problems/range-sum-query-immutable/
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

class NumArray {
  private:
    vector<int> sums;

  public:
    NumArray(vector<int> &nums) {
        sums.push_back(0);
        int sum = 0;
        for (int num : nums) {
            sum += num;
            sums.push_back(sum);
        }
    }

    int sumRange(int i, int j) { return sums[j + 1] - sums[i]; }
};

int main(int argc, char *argv[]) { return 0; }
