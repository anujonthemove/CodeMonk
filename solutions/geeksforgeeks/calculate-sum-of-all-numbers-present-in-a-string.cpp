/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge geeksforgeeks
 * @problem_id calculate-sum-of-all-numbers-present-in-a-string
 * @problem_address
 *http://www.geeksforgeeks.org/calculate-sum-of-all-numbers-present-in-a-string/
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
    string word;
    cin >> word;
    int res = 0, n = word.length(), pre = -1;
    for (int i = 0; i <= n; i++) {
        char ch = word[i];
        if (!('0' <= ch && ch <= '9') || i == n) {
            if (pre != -1) {
                res += pre;
            }
        }
        if ('0' <= ch && ch <= '9') {
            if (pre == -1) {
                pre = ch - '0';
            } else {
                pre = pre * 10 + ch - '0';
            }
        } else {
            pre = -1;
        }
    }
    cout << res << endl;
    return 0;
}
