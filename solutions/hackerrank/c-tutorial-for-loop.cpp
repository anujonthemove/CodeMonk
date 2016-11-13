/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id c-tutorial-for-loop
 * @problem_address https://www.hackerrank.com/challenges/c-tutorial-for-loop
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
    string names[10] = {"zero", "one", "two",   "three", "four",
                        "five", "six", "seven", "eight", "nine"};
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (i <= 9) {
            cout << names[i] << endl;
        } else {
            cout << (i % 2 == 0 ? "even" : "odd") << endl;
        }
    }
    return 0;
}
