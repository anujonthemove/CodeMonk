/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id variable-sized-arrays
 * @problem_address https://www.hackerrank.com/challenges/variable-sized-arrays
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
    int n, Q;
    cin >> n >> Q;
    int **nums = new int *[n];
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        nums[i] = new int[m];
        for (int j = 0; j < m; j++) {
            cin >> nums[i][j];
        }
    }
    for (int q = 0; q < Q; q++) {
        int i, j;
        cin >> i >> j;
        cout << nums[i][j] << endl;
    }
    return 0;
}
