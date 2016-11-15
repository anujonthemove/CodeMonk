/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id c-tutorial-strings
 * @problem_address https://www.hackerrank.com/challenges/c-tutorial-strings
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
    string s1, s2;
    cin >> s1 >> s2;
    cout << s1.length() << " " << s2.length() << endl;
    cout << s1 + s2 << endl;
    char c1 = s1[0], c2 = s2[0];
    s1[0] = c2;
    s2[0] = c1;
    cout << s1 << " " << s2 << endl;
    return 0;
}
