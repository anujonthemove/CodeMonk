/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id count-and-say
 * @problem_address https://leetcode.com/problems/count-and-say/
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
    string countAndSay(int n) {
        if (n == 1)
            return "1";
        string preRes = countAndSay(n - 1);
        char pre = preRes[0];
        int count = 1;
        stringstream ss;
        for (int i = 1; i < preRes.length(); i++) {
            char now = preRes[i];
            if (now != pre) {
                ss << count << pre;
                count = 1;
            } else {
                count++;
            }
            pre = now;
        }
        ss << count << pre;
        return ss.str();
    }
};

int main(int argc, char *argv[]) { return 0; }
