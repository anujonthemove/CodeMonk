/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id intersection-of-two-arrays
 * @problem_address https://leetcode.com/problems/intersection-of-two-arrays/
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
    vector<int> intersection(vector<int> &A1, vector<int> &A2) {
        set<int> nums1, nums2;
        for (int a : A1) {
            nums1.insert(a);
        }
        for (int a : A2) {
            nums2.insert(a);
        }
        vector<int> nums(min(nums1.size(), nums2.size()));
        vector<int>::iterator it =
            set_intersection(nums1.begin(), nums1.end(), nums2.begin(),
                             nums2.end(), nums.begin());
        nums.resize(it - nums.begin());
        return nums;
    }
};

int main(int argc, char *argv[]) { return 0; }
