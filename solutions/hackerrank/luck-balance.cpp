/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id luck-balance
 * @problem_address https://www.hackerrank.com/challenges/luck-balance
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
    int n, k;
    cin >> n >> k;
    vector<int> lucks;
    int res = 0;
    for (int i = 0; i < n; i++) {
        int luck;
        cin >> luck;
        int type;
        cin >> type;
        if (type == 0) {
            res += luck;
        } else {
            lucks.push_back(luck);
        }
    }
    sort(lucks.begin(), lucks.end());
    reverse(lucks.begin(), lucks.end());
    for (int i = 0; i < lucks.size(); i++) {
        if (i < k) {
            res += lucks[i];
        } else {
            res -= lucks[i];
        }
    }
    cout << res << endl;
    return 0;
}
