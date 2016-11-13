/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id 30-dictionaries-and-maps
 * @problem_address
 *https://www.hackerrank.com/challenges/30-dictionaries-and-maps
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
    map<string, string> mapping;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string name, phone;
        cin >> name >> phone;
        mapping[name] = phone;
    }
    string name;
    while (cin >> name) {
        if (mapping.find(name) == mapping.end()) {
            cout << "Not found" << endl;
        } else {
            cout << name << "=" << mapping[name] << endl;
        }
    }
    return 0;
}
