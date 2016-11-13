/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id 30-more-exceptions
 * @problem_address https://www.hackerrank.com/challenges/30-more-exceptions
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

class MyException : public exception {
    const char *what() const throw() {
        return "n and p should be non-negative";
    }
};

struct Calculator {
    int power(int n, int p) {
        if (n < 0 || p < 0) {
            throw MyException();
        }
        int res = 1;
        for (int i = 1; i <= p; i++) {
            res *= n;
        }
        return res;
    }
};

int main(int argc, char *argv[]) {
    Calculator myCalculator = Calculator();
    int T, n, p;
    cin >> T;
    while (T-- > 0) {
        if (scanf("%d %d", &n, &p) == 2) {
            try {
                int ans = myCalculator.power(n, p);
                cout << ans << endl;
            } catch (exception &e) {
                cout << e.what() << endl;
            }
        }
    }
    return 0;
}
