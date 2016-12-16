/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge vijos
 * @problem_id 1409
 * @problem_address https://vijos.org/p/1409
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
    int w, n;
    cin >> w >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    int i = 0, j = n - 1, res = 0;
    while (i <= j) {
        if (i == j) {
            int num = nums[i];
            if (num <= w) {
                res++;
            }
            break;
        } else {
            int a = nums[i], b =nums[j], sum = a + b;
            if (sum <= w) {
                res++;
                i++;
                j--;
            } else {
                if (b <= w) {
                    res++;
                }
                j--;
            }
        }
    }
    cout << res << endl;
    return 0;
}
