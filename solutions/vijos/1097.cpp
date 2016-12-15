/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge vijos
 * @problem_id 1097
 * @problem_address https://vijos.org/p/1097
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
        nums[i] = -num;
    }
    make_heap(nums.begin(), nums.end());
    int res = 0;
    while (n > 1) {
        int a = nums.front();
        pop_heap(nums.begin(), nums.begin() + n);
        int b = nums.front();
        pop_heap(nums.begin(), nums.begin() + n - 1);
        int sum = a + b;
        nums[n - 2] = sum;
        push_heap(nums.begin(), nums.begin() + n - 1);
        res += sum;
        n--;
    }
    cout << -res << endl;
    return 0;
}
