/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id speed-7
 * @problem_address
 *https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/speed-7/
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
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int n;
        cin >> n;
        int res = 0;
        long long maxNum = 1000000001;
        for (int i = 0; i < n; i++) {
            long long num;
            cin >> num;
            maxNum = min(maxNum, num);
            if (maxNum >= num) {
                res += 1;
            }
        }
        cout << res << endl;
    }
    return 0;
}
