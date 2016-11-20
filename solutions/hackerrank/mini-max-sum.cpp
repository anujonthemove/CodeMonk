/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id mini-max-sum
 * @problem_address https://www.hackerrank.com/challenges/mini-max-sum
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
    int n = 5;
    vector<long long> nums(n);
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        sum += nums[i];
    }
    long long low = *min_element(nums.begin(), nums.end());
    long long high = *max_element(nums.begin(), nums.end());
    cout << (sum - high) << " " << (sum - low) << endl;
    return 0;
}
