/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id first-unique-character-in-a-string
 * @problem_address
 *https://leetcode.com/problems/first-unique-character-in-a-string/
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
    int firstUniqChar(string word) {
        map<char, int> counts;
        for (char ch : word) {
            if (counts.find(ch) == counts.end()) {
                counts[ch] = 0;
            }
            counts[ch]++;
        }
        for (int i = 0; i < word.length(); i++) {
            char ch = word[i];
            if (counts[ch] == 1) {
                return i;
            }
        }
        return -1;
    }
};

int main(int argc, char *argv[]) { return 0; }
