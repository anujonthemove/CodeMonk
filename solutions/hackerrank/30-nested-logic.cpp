/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id 30-nested-logic
 * @problem_address https://www.hackerrank.com/challenges/30-nested-logic
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
    int d1, d2, m1, m2, y1, y2;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    int fine = 0;
    if (y1 > y2) {
        fine = 10000;
    } else if (y1 == y2) {
        if (m1 > m2) {
            fine = 500 * (m1 - m2);
        } else if (m1 == m2) {
            if (d1 > d2) {
                fine = 15 * (d1 - d2);
            }
        }
    }
    cout << fine << endl;
    return 0;
}
