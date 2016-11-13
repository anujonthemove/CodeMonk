/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id 30-running-time-and-complexity
 * @problem_address
 *https://www.hackerrank.com/challenges/30-running-time-and-complexity
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

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    int middle = (int)floor(sqrt(n));
    bool prime = true;
    for (int i = 2; i <= middle; i++) {
        if (n % i == 0) {
            prime = false;
            break;
        }
    }
    return prime;
}

int main(int argc, char *argv[]) {
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int n;
        cin >> n;
        cout << (isPrime(n) ? "Prime" : "Not prime") << endl;
    }
    return 0;
}
