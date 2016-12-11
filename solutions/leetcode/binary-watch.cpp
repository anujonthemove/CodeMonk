/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id binary-watch
 * @problem_address https://leetcode.com/problems/binary-watch/
 **/

#include <algorithm>
#include <bitset>
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
    vector<string> readBinaryWatch(int num) {
        vector<string> times;
        for (int h = 0; h < 12; h++) {
            for (int m = 0; m < 60; m++) {
                if (bitset<10>(h << 6 | m).count() == num) {
                    times.push_back(to_string(h) + (m < 10 ? ":0" : ":") +
                                    to_string(m));
                }
            }
        }
        return times;
    }
};

int main(int argc, char *argv[]) { return 0; }
