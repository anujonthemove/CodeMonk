/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge geeksforgeeks
 * @problem_id vigenere-cipher
 * @problem_address http://www.geeksforgeeks.org/vigenere-cipher/
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

string encrypt(string key, string raw) {
    string enc;
    int n = raw.length(), k = key.length();
    for (int i = 0; i < n; i++) {
        char ch = raw[i];
        ch = (ch - 'A' + key[i % k] - 'A') % 26 + 'A';
        enc += ch;
    }
    return enc;
}

string decrypt(string key, string enc) {
    string dec;
    int n = enc.length(), k = key.length();
    for (int i = 0; i < n; i++) {
        char ch = enc[i];
        ch = (ch - 'A' + 'A' - key[i % k] + 26) % 26 + 'A';
        dec += ch;
    }
    return dec;
}

int main(int argc, char *argv[]) {
    string raw, key;
    cin >> raw >> key;
    string enc = encrypt(key, raw), dec = decrypt(key, enc);
    cout << "Ciphertext : " << enc << endl;
    cout << "Original/Decrypted Text : " << dec << endl;
    return 0;
}
