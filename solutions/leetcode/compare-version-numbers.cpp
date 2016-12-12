/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id compare-version-numbers
 * @problem_address https://leetcode.com/problems/compare-version-numbers/
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
    vector<int> getVersions(string version) {
        version += '.';
        vector<int> vs;
        int v = 0;
        char pre = '.';
        for (int i = 0; i < version.length(); i++) {
            char now = version[i];
            if (now == '.') {
                if (pre != '.') {
                    vs.push_back(v);
                }
                v = 0;
            } else {
                v = v * 10 + now - '0';
            }
            pre = now;
        }
        for (int i = vs.size() - 1; i >= 0; i--) {
            if (vs[i] == 0) {
                vs.pop_back();
            } else {
                break;
            }
        }
        return vs;
    }
    int compareVersion(string version1, string version2) {
        vector<int> vs1 = getVersions(version1), vs2 = getVersions(version2);
        for (int i = 0; i < min(vs1.size(), vs2.size()); i++) {
            if (vs1[i] < vs2[i]) {
                return -1;
            } else if (vs1[i] > vs2[i]) {
                return 1;
            }
        }
        if (vs1.size() < vs2.size()) {
            return -1;
        } else if (vs1.size() > vs2.size()) {
            return 1;
        }
        return 0;
    }
};

int main(int argc, char *argv[]) { return 0; }
