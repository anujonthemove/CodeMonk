/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge geeksforgeeks
 * @problem_id longest-common-extension-lce-set-1-introduction-and-naive-method
 * @problem_address
 *http://www.geeksforgeeks.org/longest-common-extension-lce-set-1-introduction-and-naive-method/
 **/

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <iterator>
#include <map>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
    string word;
    cin >> word;
    int Q, n = word.length();
    cin >> Q;
    for (int q = 0; q < Q; q++) {
        int a, b;
        cin >> a >> b;
        int res = 0;
        for (int i = 0; max(a, b) + i < n; i++) {
            if (word[a + i] == word[b + i]) {
                res += 1;
            } else {
                break;
            }
        }
        cout << res << endl;
    }
}
