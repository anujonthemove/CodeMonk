/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id euler001
 * @problem_address
 *https://www.hackerrank.com/contests/projecteuler/challenges/euler001
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

long long sum(int n, int k) {
    long long m = n / k;
    return m * (m + 1) / 2 * k;
}

int main(int argc, char *argv[]) {
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int n;
        cin >> n;
        n--;
        cout << (sum(n, 3) + sum(n, 5) - sum(n, 15)) << endl;
    }
    return 0;
}
