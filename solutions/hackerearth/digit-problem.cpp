/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id digit-problem
 * @problem_address
 *https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/digit-problem/
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
    string word;
    int k;
    cin >> word >> k;
    int n = word.length();
    for (int i = 0; i < n; i++) {
        if (k <= 0) {
            break;
        }
        char ch = word[i];
        if (ch != '9') {
            word[i] = '9';
            k--;
        }
    }
    cout << word << endl;
    return 0;
}
