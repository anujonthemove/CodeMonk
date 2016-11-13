/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id 30-review-loop
 * @problem_address https://www.hackerrank.com/challenges/30-review-loop
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
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        string word;
        cin >> word;
        string first, second;
        for (int i = 0; i < word.length(); i++) {
            if (i % 2 == 0) {
                first += word[i];
            } else {
                second += word[i];
            }
        }
        cout << first << " " << second << endl;
    }
    return 0;
}
