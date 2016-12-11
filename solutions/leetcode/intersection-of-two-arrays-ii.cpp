/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id intersection-of-two-arrays-ii
 * @problem_address https://leetcode.com/problems/intersection-of-two-arrays-ii/
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
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> nums(min(nums1.size(), nums2.size()));
        vector<int>::iterator it =
            set_intersection(nums1.begin(), nums1.end(), nums2.begin(),
                             nums2.end(), nums.begin());
        nums.resize(it - nums.begin());
        return nums;
    }
};

int main(int argc, char *argv[]) { return 0; }
