/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id 30-sorting
 * @problem_address https://www.hackerrank.com/challenges/30-sorting
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
    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int totalSwaps = 0;
    for (int t = 0; t < n - 1; t++) {
        int swaps = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                int tmp = nums[i];
                nums[i] = nums[i + 1];
                nums[i + 1] = tmp;
                swaps++;
            }
        }
        if (swaps == 0) {
            break;
        }
        totalSwaps += swaps;
    }
    cout << "Array is sorted in " << totalSwaps << " swaps." << endl;
    cout << "First Element: " << nums[0] << endl;
    cout << "Last Element: " << nums[n - 1] << endl;
    return 0;
}
