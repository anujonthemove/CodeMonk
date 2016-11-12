/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge geeksforgeeks
 * @problem_id pairs-of-complete-strings-in-two-sets-of-strings
 * @problem_address
 *http://www.geeksforgeeks.org/pairs-of-complete-strings-in-two-sets-of-strings/
 **/

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <iterator>
#include <map>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

long long flag(string word) {
    long long res = 0;
    int n = word.length();
    for (int i = 0; i < n; i++) {
        res = res | (1 << (word[i] - 'a'));
    }
    return res;
}

int pairs(vector<string> words1, vector<string> words2) {
    int n = words1.size(), m = words2.size();
    long long flags1[n], flags2[m];
    for (int i = 0; i < n; i++) {
        flags1[i] = flag(words1[i]);
    }
    for (int i = 0; i < m; i++) {
        flags2[i] = flag(words2[i]);
    }
    int res = 0;
    long long target = (1 << 26) - 1;
    for (int i = 0; i < n; i++) {
        long long flag1 = flags1[i];
        for (int j = 0; j < m; j++) {
            long long flag2 = flags2[j];
            if ((flag1 | flag2) == target) {
                res++;
            }
        }
    }
    return res;
}

int main(int argc, char *argv[]) {
    int n, m;
    vector<string> words1, words2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        words1.push_back(word);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        string word;
        cin >> word;
        words2.push_back(word);
    }
    cout << pairs(words1, words2) << endl;
    return 0;
}
