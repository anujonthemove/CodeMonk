/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id median-of-two-sorted-arrays
 * @problem_address https://leetcode.com/problems/median-of-two-sorted-arrays/
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
    double medianForUnsorted(vector<int> nums) {
        sort(nums.begin(), nums.end());
        return this->median(nums);
    }
    double median(vector<int> &nums) {
        int n = nums.size();
        if (n % 2 != 0) {
            return nums[n / 2];
        }
        return (nums[n / 2 - 1] + nums[n / 2]) / 2.0;
    }
    double median(vector<int> &nums1, vector<int> &nums2) {
        vector<int> nums;
        for (int num : nums1) {
            nums.push_back(num);
        }
        for (int num : nums2) {
            nums.push_back(num);
        }
        sort(nums.begin(), nums.end());
        return this->median(nums);
    }
    double find(vector<int> &nums1, vector<int> &nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        if (n1 == 0) {
            if (n2 <= 0) {
                return -1;
            }
            return this->median(nums2);
        } else if (n1 == 1) {
            if (n2 <= 4) {
                return this->median(nums1, nums2);
            }
            int k1 = nums1[0];
            if (n2 % 2 == 0) {
                int k2 = nums2[n2 / 2 - 1], k3 = nums2[n2 / 2];
                return this->medianForUnsorted(vector<int>{k1, k2, k3});
            } else {
                int k2 = nums2[n2 / 2 - 1], k3 = nums2[n2 / 2],
                    k4 = nums2[n2 / 2 + 1];
                return (this->medianForUnsorted(vector<int>{k1, k2, k4}) + k3) /
                       2.0;
            }
        } else if (n1 == 2) {
            if (n2 <= 4) {
                return this->median(nums1, nums2);
            }
            int k1 = nums1[0], k2 = nums1[1];
            if (n2 % 2 == 0) {
                int k3 = nums2[n2 / 2 - 2], k4 = nums2[n2 / 2 - 1],
                    k5 = nums2[n2 / 2], k6 = nums2[n2 / 2 + 1];
                return this->medianForUnsorted(
                    vector<int>{k4, k5, max(k1, k3), min(k2, k6)});
            } else {
                int k3 = nums2[n2 / 2 - 1], k4 = nums2[n2 / 2],
                    k5 = nums2[n2 / 2 + 1];
                return this->medianForUnsorted(
                    vector<int>{max(k1, k3), k4, min(k2, k5)});
            }
        }
        double median1 = this->median(nums1), median2 = this->median(nums2);
        int len = n1 / 2;
        if (n1 % 2 == 0) {
            len--;
        }
        if (median1 == median2) {
            return median1;
        } else if (median1 < median2) {
            nums1.erase(nums1.begin(), nums1.begin() + len);
            nums2.erase(nums2.begin() + n2 - len, nums2.end());
        } else {
            nums1.erase(nums1.begin() + n1 - len, nums1.end());
            nums2.erase(nums2.begin(), nums2.begin() + len);
        }
        return this->find(nums1, nums2);
    }
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        if (n1 <= n2) {
            return this->find(nums1, nums2);
        } else {
            return this->find(nums2, nums1);
        }
    }
};

int main(int argc, char *argv[]) {
    vector<int> nums1 = vector<int>{1, 2, 6, 7};
    vector<int> nums2 = vector<int>{3, 4, 5, 8};
    Solution solution;
    cout << solution.findMedianSortedArrays(nums1, nums2) << endl;
    return 0;
}
