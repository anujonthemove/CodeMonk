/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id camelcase
 * @problem_address https://www.hackerrank.com/challenges/camelcase
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
    string word;
    cin >> word;
    int res = 1;
    for (int i = 0; i < word.length(); i++) {
        if (isupper(word[i]))
            res++;
    }
    cout << res << endl;
    return 0;
}
