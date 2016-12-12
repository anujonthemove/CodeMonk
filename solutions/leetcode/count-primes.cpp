/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id count-primes
 * @problem_address https://leetcode.com/problems/count-primes/
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
    int countPrimes(int n) {
        if (n <= 1) {
            return 0;
        }
        vector<bool> isPrimes(n, true);
        isPrimes[0] = false, isPrimes[1] = false;
        int num = 2, sum = 0;
        while (num < n) {
            sum++;
            for (int next = 2 * num; next < n; next += num) {
                isPrimes[next] = false;
            }
            while (++num < n) {
                if (isPrimes[num]) {
                    break;
                }
            }
        }
        return sum;
    }
};

int main(int argc, char *argv[]) { return 0; }
