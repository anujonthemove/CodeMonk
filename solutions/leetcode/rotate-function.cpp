/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id rotate-function
 * @problem_address https://leetcode.com/problems/rotate-function/
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
    int maxRotateFunction(vector<int> &A) {
        long long n = A.size(), f = 0, sum = 0;
        for (long long i = 0; i < n; i++) {
            long long a = A[i];
            f += i * a;
            sum += a;
        }
        long long best = f;
        for (long long i = 1; i < n; i++) {
            f = f - sum + n * A[i - 1];
            best = max(best, f);
        }
        return best;
    }
};

int main(int argc, char *argv[]) { return 0; }
