/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge codeforces
 * @problem_id 118-A
 * @problem_address http://codeforces.com/problemset/problem/118/A
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
    string word, vowels = "aeiouy";
    cin >> word;
    int n = word.length();
    for (int i = 0; i < n; i++) {
        char ch = tolower(word[i]);
        if (vowels.find(ch) == string::npos) {
            cout << "." << ch;
        }
    }
    cout << endl;
    return 0;
}
