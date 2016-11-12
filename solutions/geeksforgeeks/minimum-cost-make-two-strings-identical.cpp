/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge geeksforgeeks
 * @problem_id minimum-cost-make-two-strings-identical
 * @problem_address
 *http://www.geeksforgeeks.org/minimum-cost-make-two-strings-identical/
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

int lcs(string word1, string word2) {
    int n1 = word1.length(), n2 = word2.length();
    if (n1 <= 0 || n2 <= 0) {
        return 0;
    }
    int cache[n1][n2];
    bool hasFound = false;
    char head = word1[0];
    for (int j = 0; j < n2; j++) {
        if (!hasFound) {
            hasFound = word2[j] == head;
        }
        if (hasFound) {
            cache[0][j] = 1;
        } else {
            cache[0][j] = 0;
        }
    }
    hasFound = false;
    head = word2[0];
    for (int i = 0; i < n1; i++) {
        if (!hasFound) {
            hasFound = word1[i] == head;
        }
        if (hasFound) {
            cache[i][0] = 1;
        } else {
            cache[i][0] = 0;
        }
    }
    for (int i = 1; i < n1; i++) {
        for (int j = 1; j < n2; j++) {
            if (word1[i] == word2[j]) {
                cache[i][j] = cache[i - 1][j - 1] + 1;
            } else {
                cache[i][j] = max(cache[i - 1][j], cache[i][j - 1]);
            }
        }
    }
    return cache[n1 - 1][n2 - 1];
}

int main(int argc, char *argv[]) {
    string word1, word2;
    cin >> word1 >> word2;
    int cost1, cost2;
    cin >> cost1 >> cost2;
    int n1 = word1.length(), n2 = word2.length(), n = lcs(word1, word2);
    cout << ((n1 - n) * cost1 + (n2 - n) * cost2) << endl;
    return 0;
}
