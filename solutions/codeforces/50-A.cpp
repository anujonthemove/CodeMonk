/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge codeforces
 * @problem_id 50-A
 * @problem_address http://codeforces.com/problemset/problem/50/A
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

int getCount(int m, int n) {
    int res = n * (m / 2);
    if (m % 2 != 0) {
        res += n / 2;
    }
    return res;
}

int main(int argc, char *argv[]) {
    int m, n;
    cin >> m >> n;
    cout << max(getCount(m, n), getCount(n, m)) << endl;
    return 0;
}
