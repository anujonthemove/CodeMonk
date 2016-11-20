/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id 2d-array
 * @problem_address https://www.hackerrank.com/challenges/2d-array
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
    int n = 6;
    int nums[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> nums[i][j];
        }
    }
    int best = -100000;
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            int sum = nums[i][j];
            sum += nums[i - 1][j - 1] + nums[i - 1][j] + nums[i - 1][j + 1];
            sum += nums[i + 1][j - 1] + nums[i + 1][j] + nums[i + 1][j + 1];
            best = max(best, sum);
        }
    }
    cout << best << endl;
    return 0;
}
