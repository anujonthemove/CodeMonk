/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge vijos
 * @problem_id 1130
 * @problem_address https://vijos.org/p/1130
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
    vector<int> nums(n + 1, 1);
    for (int i = 1; i <= n; i++) {
        nums[i] = nums[i - 1];
        if (i % 2 == 0) {
            nums[i] += nums[i / 2];
        }
    }
    cout << nums[n] << endl;
    return 0;
}
