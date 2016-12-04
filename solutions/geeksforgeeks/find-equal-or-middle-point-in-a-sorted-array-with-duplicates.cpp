/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge geeksforgeeks
 * @problem_id find-equal-or-middle-point-in-a-sorted-array-with-duplicates
 * @problem_address
 *http://www.geeksforgeeks.org/find-equal-or-middle-point-in-a-sorted-array-with-duplicates/
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
        int n;
        cin >> n;
        int indices[n], pre, now, count = 0;
        for (int i = 0; i < n; i++) {
            cin >> now;
            if (i == 0) {
                indices[count++] = 0;
            } else {
                if (now != pre) {
                    indices[count++] = i;
                }
            }
            pre = now;
        }
        int res = -1;
        if (count % 2 != 0) {
            res = indices[count / 2];
        }
        cout << res << endl;
    }
    return 0;
}
