/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge geeksforgeeks
 * @problem_id find-all-strings-that-match-specific-pattern-in-a-dictionary
 * @problem_address
 *http://www.geeksforgeeks.org/find-all-strings-that-match-specific-pattern-in-a-dictionary/
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

string getKey(string raw) {
    int n = raw.length();
    stringstream ss;
    vector<char> seen;
    for (int i = 0; i < n; i++) {
        char ch = raw[i];
        vector<char>::iterator pos = find(seen.begin(), seen.end(), ch);
        if (pos == seen.end()) {
            seen.push_back(ch);
            ss << (seen.size() - 1);
        } else {
            ss << (pos - seen.begin());
        }
        ss << "-";
    }
    return ss.str();
}

int main(int argc, char *argv[]) {
    string key;
    cin >> key;
    key = getKey(key);
    string word;
    while (cin >> word) {
        if (key == getKey(word)) {
            cout << word << " ";
        }
    }
    return 0;
}
