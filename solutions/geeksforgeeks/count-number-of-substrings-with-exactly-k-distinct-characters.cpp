/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge geeksforgeeks
 * @problem_id count-number-of-substrings-with-exactly-k-distinct-characters
 * @problem_address
 *http://www.geeksforgeeks.org/count-number-of-substrings-with-exactly-k-distinct-characters/
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
    int k;
    cin >> k;
    string word;
    cin >> word;
    int n = word.length(), res = 0;
    for (int i = 0; i <= n - k; i++) {
        int count = 0, counts[26] = {0};
        for (int j = i; j < n; j++) {
            int pos = word[j] - 'a';
            if (counts[pos] == 0) {
                count += 1;
                if (count > k) {
                    break;
                }
            }
            if (count == k) {
                res += 1;
            }
            counts[pos] += 1;
        }
    }
    cout << res << endl;
    return 0;
}
