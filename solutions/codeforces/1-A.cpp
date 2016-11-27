/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge codeforces
 * @problem_id 1-A
 * @problem_address http://codeforces.com/problemset/problem/1/A
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
    int n, m, a;
    cin >> n >> m >> a;
    cout << (long long)ceil((n + 0.0) / a) * (long long)ceil((m + 0.0) / a)
         << endl;
    return 0;
}
