/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge codeforces
 * @problem_id 4-A
 * @problem_address http://codeforces.com/problemset/problem/4/A
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
    int n;
    cin >> n;
    bool valid = (n % 2 == 0) && (n > 2);
    cout << (valid ? "YES" : "NO") << endl;
    return 0;
}
