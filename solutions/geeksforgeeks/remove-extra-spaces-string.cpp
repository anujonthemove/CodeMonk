/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge geeksforgeeks
 * @problem_id remove-extra-spaces-string
 * @problem_address http://www.geeksforgeeks.org/remove-extra-spaces-string/
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
    string line, bads = " .,?";
    getline(cin, line);
    int pos = 0, n = line.length();
    for (int i = 0; i < n; i++) {
        char ch = line[i];
        if (ch != ' ') {
            line[pos++] = ch;
        } else {
            if (pos == 0 || i == n - 1) {
            } else {
                char next = line[i + 1];
                if (bads.find(next) == string::npos) {
                    line[pos++] = ch;
                }
            }
        }
    }
    line.erase(line.begin() + pos, line.end());
    cout << line << endl;
    return 0;
}
