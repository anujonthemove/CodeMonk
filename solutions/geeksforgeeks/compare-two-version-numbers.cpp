/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge geeksforgeeks
 * @problem_id compare-two-version-numbers
 * @problem_address http://www.geeksforgeeks.org/compare-two-version-numbers/
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

vector<int> explode(string v) {
    vector<int> res;
    int n = v.length();
    int pre = -1;
    for (int i = 0; i <= n; i++) {
        if (i == n || v[i] == '.') {
            if (pre >= 0) {
                res.push_back(pre);
            }
            pre = -1;
            continue;
        }
        int d = v[i] - '0';
        if (pre == -1) {
            pre = d;
        } else {
            pre = pre * 10 + d;
        }
    }
    return res;
}

int cmp(string v1, string v2) {
    vector<int> nums1 = explode(v1);
    vector<int> nums2 = explode(v2);
    int n1 = nums1.size(), n2 = nums2.size(), n = min(n1, n2);
    for (int i = 0; i < n; i++) {
        if (nums1[i] < nums2[i]) {
            return -1;
        } else if (nums1[i] > nums2[i]) {
            return 1;
        }
    }
    if (n1 < n2) {
        return -1;
    } else if (n1 > n2) {
        return 1;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    string v1, v2;
    cin >> v1 >> v2;
    int cmpRes = cmp(v1, v2);
    if (cmpRes < 0) {
        cout << v1 << " is smaller" << endl;
    } else if (cmpRes > 0) {
        cout << v2 << " is smaller" << endl;
    } else {
        cout << "Both versions are equal" << endl;
    }
    return 0;
}
