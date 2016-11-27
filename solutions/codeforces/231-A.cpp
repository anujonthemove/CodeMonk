/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge codeforces
 * @problem_id 231-A
 * @problem_address http://codeforces.com/problemset/problem/231/A
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
    int res = 0;
    for (int t = 0; t < T; t++) {
        int cnt = 0;
        for (int i = 0; i < 3; i++) {
            int num;
            cin >> num;
            cnt += num;
        }
        if (cnt >= 2) {
            res++;
        }
    }
    cout << res << endl;
    return 0;
}
