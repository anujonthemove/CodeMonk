/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge geeksforgeeks
 * @problem_id perfect-reversible-string
 * @problem_address http://www.geeksforgeeks.org/perfect-reversible-string/
 **/

#include <set>
#include <map>
#include <cmath>
#include <regex>
#include <stack>
#include <vector>
#include <string>
#include <cstdio>
#include <sstream>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]){
    int T, n;
    cin >> T;
    for(int t = 0; t < T; t++){
        cin >> n;
        string word;
        cin >> word;
        string reversed = word;
        reverse(reversed.begin(), reversed.end());
        cout << (word == reversed ? 1 : 0) << endl;
    }
    return 0;
}
