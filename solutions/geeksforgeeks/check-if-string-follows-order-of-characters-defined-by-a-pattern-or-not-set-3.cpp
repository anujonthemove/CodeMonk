/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge geeksforgeeks
 * @problem_id
 *check-if-string-follows-order-of-characters-defined-by-a-pattern-or-not-set-3
 * @problem_address
 *http://www.geeksforgeeks.org/check-if-string-follows-order-of-characters-defined-by-a-pattern-or-not-set-3/
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

int main(int argc, char *argv[]) {
    string word, pattern;
    getline(cin, word);
    cin >> pattern;
    bool obeyOrder = true;
    int n = word.length(), pre = -1;
    for (int i = 0; i < n; i++) {
        char ch = word[i];
        int pos = pattern.find(ch);
        if (pos == string::npos) {
            continue;
        }
        if (pre != -1) {
            if (pos < pre) {
                obeyOrder = false;
                break;
            }
        }
        pre = pos;
    }
    cout << (obeyOrder ? "true" : "false") << endl;
    return 0;
}
