/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge geeksforgeeks
 * @problem_id
 *multiplying-variable-constant-without-using-multiplication-operator
 * @problem_address
 *http://www.geeksforgeeks.org/multiplying-variable-constant-without-using-multiplication-operator/
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

long long multiply(int a, int b) {
    int c = 0;
    long long res = 0;
    while (b > 0) {
        int digit = b % 2;
        b /= 2;
        if (digit) {
            res += (a << c);
        }
        c++;
    }
    return res;
}

int main(int argc, char *argv[]) {
    int a = 35, b = 291;
    cout << (multiply(a, b) == a * b) << endl;
    return 0;
}
