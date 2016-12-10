/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id sum-of-two-integers
 * @problem_address https://leetcode.com/problems/sum-of-two-integers/
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
    int getSum(int a, int b) {
        int sum = a ^ b, carry = (a & b) << 1;
        if (carry == 0) {
            return sum;
        }
        return getSum(sum, carry);
    }
};

int main(int argc, char *argv[]) { return 0; }
