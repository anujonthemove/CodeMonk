/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge spoj
 * @problem_id CPTTRN3
 * @problem_address http://www.spoj.com/problems/CPTTRN3/
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
        int m, n;
        cin >> m >> n;
        for (int i = 0; i < m; i++) {
            for (int k = 0; k < 3; k++) {
                for (int j = 0; j < n; j++) {
                    if (k == 0) {
                        cout << "***";
                    } else {
                        cout << "*..";
                    }
                }
                cout << "*" << endl;
            }
        }
        for (int j = 0; j < n; j++) {
            cout << "***";
        }
        cout << "*" << endl;
        cout << endl;
    }
    return 0;
}
