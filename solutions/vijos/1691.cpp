/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge vijos
 * @problem_id 1691
 * @problem_address https://vijos.org/p/1691
 **/

#include <set>
#include <map>
#include <cmath>
#include <regex>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <cstdio>
#include <sstream>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i] >> nums[i];
    }
    sort(nums.begin(), nums.end());
    int median;
    if (n % 2 != 0) {
        median = nums[n / 2];
    } else {
        median = (nums[n / 2 - 1] + nums[n / 2]) / 2;
    }
    int sum = 0;
    for (int num: nums) {
        sum += abs(num - median);
    }
    cout << sum << endl;
    return 0;
}
