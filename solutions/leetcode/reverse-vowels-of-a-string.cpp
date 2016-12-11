/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id reverse-vowels-of-a-string
 * @problem_address https://leetcode.com/problems/reverse-vowels-of-a-string/
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
    string reverseVowels(string word) {
        vector<int> indices;
        string vowels = "aeiou";
        for (int i = 0; i < word.length(); i++) {
            char ch = tolower(word[i]);
            if (vowels.find(ch) != string::npos) {
                indices.push_back(i);
            }
        }
        int n = indices.size(), half = n / 2;
        for (int i = 0; i < half; i++) {
            swap(word[indices[i]], word[indices[n - 1 - i]]);
        }
        return word;
    }
};

int main(int argc, char *argv[]) { return 0; }
