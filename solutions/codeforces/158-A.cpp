/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge codeforces
 * @problem_id 158-A
 * @problem_address http://codeforces.com/problemset/problem/158/A
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
    int n, k;
    cin >> n >> k;
    int scores[n];
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }
    int kth = scores[k - 1];
    if (kth > 0) {
        int i;
        for (i = k; i < n; i++) {
            if (scores[i] < kth) {
                break;
            }
        }
        cout << i << endl;
    } else {
        int i;
        for (i = k - 1; i >= 0; i--) {
            if (scores[i] > 0) {
                break;
            }
        }
        cout << (i + 1) << endl;
    }
    return 0;
}
