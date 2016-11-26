/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id min-max-3
 * @problem_address
 *https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/min-max-3/
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
    int n;
    cin >> n;
    vector<int> nums(n);
    int bottom = 101, top = 0;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums[i] = num;
        bottom = min(bottom, num);
        top = max(top, num);
    }
    sort(nums.begin(), nums.end());
    auto it = unique(nums.begin(), nums.end());
    bool full = (it - nums.begin()) == (top - bottom + 1);
    cout << (full ? "YES" : "NO") << endl;
    return 0;
}
