/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge geeksforgeeks
 * @problem_id group-shifted-string
 * @problem_address http://www.geeksforgeeks.org/group-shifted-string/
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

string getKey(string word) {
    stringstream ss;
    int pre, n = word.length();
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            pre = word[i];
            continue;
        }
        ss << (word[i] - pre + 26) % 26;
    }
    return ss.str();
}

int main(int argc, char *argv[]) {
    string word;
    map<string, vector<string>> mapping;
    while (cin >> word) {
        string key = getKey(word);
        if (mapping.find(key) == mapping.end()) {
            vector<string> words;
            mapping[key] = words;
        }
        mapping[key].push_back(word);
    }
    for (map<string, vector<string>>::iterator it1 = mapping.begin();
         it1 != mapping.end(); it1++) {
        for (vector<string>::iterator it2 = it1->second.begin();
             it2 != it1->second.end(); it2++) {
            cout << *it2 << " ";
        }
        cout << endl;
    }
    return 0;
}
