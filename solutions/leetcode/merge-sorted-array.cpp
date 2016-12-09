/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id merge-sorted-array
 * @problem_address https://leetcode.com/problems/merge-sorted-array/
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
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        int i = 0, j = 0;
        while (i < m && j < n) {
            int num1 = nums1[i + j], num2 = nums2[j];
            if (num1 <= num2) {
                i++;
            } else {
                nums1.insert(nums1.begin() + i + j, num2);
                j++;
            }
        }
        for (; j < n; j++) {
            nums1.insert(nums1.begin() + i + j, nums2[j]);
        }
        nums1.resize(m + n);
    }
};

int main(int argc, char *argv[]) { return 0; }
