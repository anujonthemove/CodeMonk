/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id nth-digit
 * @problem_address https://leetcode.com/problems/nth-digit/
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

class Solution {
  public:
    int findNthDigit(int N) {
        long long n = N;
        long long count = 9, digits = 1;
        while (n > count * digits) {
            n -= count * digits;
            count *= 10;
            digits++;
        }
        long long num = 1;
        for (long long i = 1; i < digits; i++) {
            num *= 10;
        }
        num += ((n - 1) / digits);
        string str = to_string(num);
        return str[(n - 1) % digits] - '0';
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    cout << solution.findNthDigit(1000000000) << endl;
    return 0;
}
