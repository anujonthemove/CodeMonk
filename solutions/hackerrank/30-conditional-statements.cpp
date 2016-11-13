/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id 30-conditional-statements
 * @problem_address
 *https://www.hackerrank.com/challenges/30-conditional-statements
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
    int n;
    cin >> n;
    string output = "Weird";
    if (n % 2 == 0) {
        if ((2 <= n && n <= 5) || n > 20) {
            output = "Not Weird";
        }
    }
    cout << output << endl;
    return 0;
}
