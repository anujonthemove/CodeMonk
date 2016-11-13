/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id 30-2d-arrays
 * @problem_address https://www.hackerrank.com/challenges/30-2d-arrays
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
    int res = -9 * 7, n = 6;
    int nums[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> nums[i][j];
        }
    }
    for (int i = 1; i <= n - 2; i++) {
        for (int j = 1; j <= n - 2; j++) {
            int sum = nums[i][j];
            for (int k = -1; k <= 1; k++) {
                sum += nums[i - 1][j + k] + nums[i + 1][j + k];
            }
            res = max(res, sum);
        }
    }
    cout << res << endl;
    return 0;
}
