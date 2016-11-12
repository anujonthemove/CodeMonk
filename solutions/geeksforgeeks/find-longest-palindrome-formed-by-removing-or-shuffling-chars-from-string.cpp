/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge geeksforgeeks
 * @problem_id
 *find-longest-palindrome-formed-by-removing-or-shuffling-chars-from-string
 * @problem_address
 *http://www.geeksforgeeks.org/find-longest-palindrome-formed-by-removing-or-shuffling-chars-from-string/
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
    int counts[26] = {0};
    for (int i = 0; i < word.length(); i++) {
        counts[word[i] - 'a'] += 1;
    }
    string head, middle;
    for (int i = 0; i < 26; i++) {
        int count = counts[i];
        if (count % 2 != 0) {
            if (middle.length() <= 0) {
                middle += (i + 'a');
            }
        }
        for (int j = 0; j < count / 2; j++) {
            head += (i + 'a');
        }
    }
    cout << head;
    cout << middle;
    reverse(head.begin(), head.end());
    cout << head;
    cout << endl;
    return 0;
}
