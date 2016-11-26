/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id addition-aint-simple
 * @problem_address
 *https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/addition-aint-simple/
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
        string line;
        cin >> line;
        int n = line.length();
        for (int i = 0; i < (n + 1) / 2; i++) {
            int j = n - 1 - i;
            int inc = (line[i] - 'a' + 1 + line[j] - 'a' + 1) % 26 - 1;
            if (inc < 0)
                inc += 26;
            char ch = inc + 'a';
            line[i] = ch;
            line[j] = ch;
        }
        cout << line << endl;
    }
    return 0;
}
