/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id array-left-rotation
 * @problem_address https://www.hackerrank.com/challenges/array-left-rotation
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
    int n, d;
    cin >> n >> d;
    int nums[n];
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    for (int i = 0; i < n; i++) {
        cout << nums[(i + d) % n] << " ";
    }
    return 0;
}
