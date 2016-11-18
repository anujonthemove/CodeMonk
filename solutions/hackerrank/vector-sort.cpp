/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id vector-sort
 * @problem_address https://www.hackerrank.com/challenges/vector-sort
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
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums[i] = num;
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
