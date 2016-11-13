/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id c-tutorial-conditional-if-else
 * @problem_address
 *https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else
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
    string names[10] = {"zero", "one", "two",   "three", "four",
                        "five", "six", "seven", "eight", "nine"};
    cin >> n;
    if (n > 9) {
        cout << "Greater than 9" << endl;
    } else {
        cout << names[n] << endl;
    }
    return 0;
}
