/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge codeforces
 * @problem_id 71-A
 * @problem_address http://codeforces.com/problemset/problem/71/A
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

int main(int argc, char *argv[]) {
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        string word;
        cin >> word;
        int n = word.length();
        if (n > 10) {
            cout << word[0] << (n - 2) << word[n - 1] << endl;
        } else {
            cout << word << endl;
        }
    }
    return 0;
}
