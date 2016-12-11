/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id find-all-anagrams-in-a-string
 * @problem_address https://leetcode.com/problems/find-all-anagrams-in-a-string/
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
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        if (p.length() <= 0 || s.length() < p.length()) {
            return res;
        }
        vector<int> sCounts(26, 0), pCounts(26, 0);
        for (int i = 0; i < p.length(); i++) {
            sCounts[s[i] - 'a']++;
        }
        for (char ch : p) {
            pCounts[ch - 'a']++;
        }
        for (int i = 0; i < s.length(); i++) {
            if (i + p.length() - 1 >= s.length()) {
                break;
            }
            if (i != 0) {
                sCounts[s[i - 1] - 'a']--;
                sCounts[s[i + p.length() - 1] - 'a']++;
            }
            if (sCounts == pCounts) {
                res.push_back(i);
            }
        }
        return res;
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    vector<int> res = solution.findAnagrams("cbaebabacd", "abc");
    for (int item : res) {
        cout << item << endl;
    }
    return 0;
}
