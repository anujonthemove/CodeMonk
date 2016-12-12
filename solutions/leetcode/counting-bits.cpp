/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id counting-bits
 * @problem_address https://leetcode.com/problems/counting-bits/
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
    vector<int> countBits(int num) {
        vector<int> bits(1 + num, 0);
        int power = 1, remains;
        for (int n = 1; n <= num; n++) {
            if (n == power) {
                bits[n] = 1;
                remains = 0;
                power *= 2;
            } else {
                remains++;
                bits[n] = bits[remains] + 1;
            }
        }
        return bits;
    }
};

int main(int argc, char *argv[]) { return 0; }
