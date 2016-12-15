/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge vijos
 * @problem_id 1123
 * @problem_address https://vijos.org/p/1123
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
    int mean = 0;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums[i] = num;
        mean += num;
    }
    mean /= n;
    int res = 0;
    for (int i = 0; i < n; i++) {
        int num = nums[i];
        if (num != mean) {
            nums[i + 1] += num - mean;
            res++;
        }
    }
    cout << res << endl;
    return 0;
}
