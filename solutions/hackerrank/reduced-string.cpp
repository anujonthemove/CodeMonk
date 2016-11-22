/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id reduced-string
 * @problem_address https://www.hackerrank.com/challenges/reduced-string
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

string reduce(string word) {
    for (int i = 0; i < word.length(); i++) {
        if (i > 0) {
            if (word[i - 1] == word[i]) {
                word.erase(i - 1, 2);
                break;
            }
        }
    }
    return word;
}

int main(int argc, char *argv[]) {
    string word, changed;
    cin >> word;
    while (true) {
        changed = reduce(word);
        if (word == changed) {
            break;
        } else {
            word = changed;
        }
    }
    if (word.length() <= 0)
        word = "Empty String";
    cout << word << endl;
    return 0;
}
