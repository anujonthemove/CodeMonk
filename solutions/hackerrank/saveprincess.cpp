/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id saveprincess
 * @problem_address https://www.hackerrank.com/challenges/saveprincess
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

void displayPathtoPrincess(int n, vector<string> grid) {
    int mI, mJ, pI, pJ;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char ch = grid[i][j];
            if (ch == 'm') {
                mI = i, mJ = j;
            } else if (ch == 'p') {
                pI = i, pJ = j;
            }
        }
    }
    while (mI != pI || mJ != pJ) {
        if (mI < pI) {
            cout << "DOWN" << endl;
            mI++;
        } else if (mI > pI) {
            cout << "UP" << endl;
            mI--;
        } else if (mJ < pJ) {
            cout << "RIGHT" << endl;
            mJ++;
        } else if (mJ > pJ) {
            cout << "LEFT" << endl;
            mJ--;
        }
    }
}

int main(int argc, char *argv[]) { return 0; }
