/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge geeksforgeeks
 * @problem_id find-kth-character-of-decrypted-string
 * @problem_address
 *http://www.geeksforgeeks.org/find-kth-character-of-decrypted-string/
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
    string enc;
    cin >> enc;
    int k;
    cin >> k;
    int i = 0, n = enc.length(), len = 0;
    char res = ' ';
    while (i < n) {
        string item;
        int count = 0;
        while (i < n) {
            char ch = enc[i];
            if (!('0' <= ch && ch <= '9')) {
                item += ch;
            } else {
                break;
            }
            i++;
        }
        if (item.length() <= 0 || i >= n) {
            break;
        }
        while (i < n) {
            char ch = enc[i];
            if ('0' <= ch && ch <= '9') {
                count = count * 10 + ch - '0';
            } else {
                break;
            }
            i++;
        }
        if (count <= 0) {
            break;
        }
        if (k <= len + item.length() * count) {
            res = item[(k - len - 1) % item.length()];
        }
        len += item.length() * count;
    }
    cout << res << endl;
    return 0;
}
