/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge spoj
 * @problem_id CPTTRN4
 * @problem_address http://www.spoj.com/problems/CPTTRN4/
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
        int M, N, m, n;
        cin >> M >> N >> m >> n;
        for (int I = 0; I < M; I++) {
            for (int i = 0; i < m + 1; i++) {
                for (int J = 0; J < N; J++) {
                    for (int j = 0; j < n + 1; j++) {
                        if (i == 0) {
                            cout << "*";
                        } else {
                            if (j == 0) {
                                cout << "*";
                            } else {
                                cout << ".";
                            }
                        }
                    }
                }
                cout << "*" << endl;
            }
        }
        for (int J = 0; J < N; J++) {
            for (int j = 0; j < n + 1; j++) {
                cout << "*";
            }
        }
        cout << "*" << endl << endl;
    }
    return 0;
}
