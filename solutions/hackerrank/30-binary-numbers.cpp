/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id 30-binary-numbers
 * @problem_address https://www.hackerrank.com/challenges/30-binary-numbers
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
    int n, res = 0, span = 0;
    cin >> n;
    while (n > 0) {
        int d = n % 2;
        n /= 2;
        if (d == 1) {
            span += 1;
        } else {
            res = max(res, span);
            span = 0;
        }
    }
    res = max(res, span);
    cout << res << endl;
    return 0;
}
