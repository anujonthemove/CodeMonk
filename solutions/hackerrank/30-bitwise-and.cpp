/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id 30-bitwise-and
 * @problem_address https://www.hackerrank.com/challenges/30-bitwise-and
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
        int n, k;
        cin >> n >> k;
        int best = -1;
        for (int i = 1; i <= n - 1; i++) {
            for (int j = i + 1; j <= n; j++) {
                int res = i & j;
                if (res < k) {
                    best = max(best, res);
                }
            }
        }
        cout << best << endl;
    }
    return 0;
}
