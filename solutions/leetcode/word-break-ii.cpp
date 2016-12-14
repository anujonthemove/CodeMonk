/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id word-break-ii
 * @problem_address https://leetcode.com/problems/word-break-ii/
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
  private:
    map<string, vector<string>> cache;

  public:
    vector<string> wordBreak(string s, unordered_set<string> &wordDict) {
        if (cache.find(s) != cache.end()) {
            return cache[s];
        }
        vector<string> words;
        if (wordDict.find(s) != wordDict.end()) {
            words.push_back(s);
        }
        int n = s.length();
        for (int len = 1; len < n; len++) {
            string head = s.substr(0, len);
            if (wordDict.find(head) != wordDict.end()) {
                vector<string> nextWords = wordBreak(s.substr(len), wordDict);
                for (string nextWord : nextWords) {
                    words.push_back(head + " " + nextWord);
                }
            }
        }
        cache[s] = words;
        return words;
    }
};

int main(int argc, char *argv[]) { return 0; }
