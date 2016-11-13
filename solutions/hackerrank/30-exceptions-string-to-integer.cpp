/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id 30-exceptions-string-to-integer
 * @problem_address
 *https://www.hackerrank.com/challenges/30-exceptions-string-to-integer
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
    string word;
    cin >> word;
    try {
        cout << stoi(word) << endl;
    } catch (exception error) {
        cout << "Bad String" << endl;
    }
    return 0;
}
