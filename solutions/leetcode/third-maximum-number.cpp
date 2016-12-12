/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id third-maximum-number
 * @problem_address https://leetcode.com/problems/third-maximum-number/
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
    int thirdMax(vector<int> &nums) {
        long long max1 = LLONG_MIN, max2 = LLONG_MIN, max3 = LLONG_MIN;
        for (int num : nums) {
            if (num == max1 || num == max2 || num == max3) {
                continue;
            }
            if (num > max1) {
                max3 = max2;
                max2 = max1;
                max1 = num;
            } else if (num > max2) {
                max3 = max2;
                max2 = num;
            } else if (num > max3) {
                max3 = num;
            }
        }
        if (max3 >= INT_MIN) {
            return max3;
        }
        return max1;
    }
};

int main(int argc, char *argv[]) { return 0; }
