/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge codeforces
 * @problem_id 282-A
 * @problem_address http://codeforces.com/problemset/problem/282/A
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
    int x = 0, T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        string line;
        cin >> line;
        if (line.find("++") != string::npos) {
            x++;
        } else {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}
