/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id c-tutorial-stringstream
 * @problem_address
 *https://www.hackerrank.com/challenges/c-tutorial-stringstream
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

vector<int> parseInts(string str) {
    stringstream ss(str);
    int num;
    vector<int> res;
    char ch;
    while (ss >> num) {
        res.push_back(num);
        if (ss.eof()) {
            break;
        }
        ss >> ch;
    }
    return res;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
