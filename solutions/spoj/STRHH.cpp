/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge spoj
 * @problem_id STRHH
 * @problem_address http://www.spoj.com/problems/STRHH/
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
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        string word;
        cin >> word;
        int n = word.length();
        for (int i = 0; i < n / 2; i += 2) {
            cout << word[i];
        }
        cout << endl;
    }
    return 0;
}
