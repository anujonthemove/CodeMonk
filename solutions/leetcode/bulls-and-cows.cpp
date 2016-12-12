/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id bulls-and-cows
 * @problem_address https://leetcode.com/problems/bulls-and-cows/
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
    string getHint(string secret, string guess) {
        vector<int> sCnts(10, 0), gCnts(10, 0);
        for (char ch : secret) {
            sCnts[ch - '0']++;
        }
        for (char ch : guess) {
            gCnts[ch - '0']++;
        }
        int a = 0;
        for (int i = 0; i < secret.length(); i++) {
            if (secret[i] == guess[i]) {
                a++;
            }
        }
        int b = 0;
        for (int i = 0; i < 10; i++) {
            b += min(sCnts[i], gCnts[i]);
        }
        b -= a;
        return to_string(a) + "A" + to_string(b) + "B";
    }
};

int main(int argc, char *argv[]) { return 0; }
