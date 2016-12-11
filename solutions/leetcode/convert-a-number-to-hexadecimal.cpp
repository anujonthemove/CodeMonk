/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id convert-a-number-to-hexadecimal
 * @problem_address
 *https://leetcode.com/problems/convert-a-number-to-hexadecimal/
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

const string HEX = "0123456789abcdef";

class Solution {
  public:
    string toHex(int num) {
        if (num == 0)
            return "0";
        string hex;
        int count = 0;
        while (num && count++ < 8) {
            hex = HEX[num & 0xf] + hex;
            num >>= 4;
        }
        return hex;
    }
};

int main(int argc, char *argv[]) { return 0; }
