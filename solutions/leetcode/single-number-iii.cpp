/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id single-number-iii
 * @problem_address https://leetcode.com/problems/single-number-iii/
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
    vector<int> singleNumber(vector<int> &nums) {
        int x = 0;
        for (int num : nums) {
            x ^= num;
        }
        int setBit = x ^ (x & (x - 1));
        int xor1 = 0, xor2 = 0;
        for (int num : nums) {
            if (num & setBit) {
                xor1 ^= num;
            } else {
                xor2 ^= num;
            }
        }
        return vector<int>{xor1, xor2};
    }
};

int main(int argc, char *argv[]) { return 0; }
