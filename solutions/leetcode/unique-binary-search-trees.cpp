/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id unique-binary-search-trees
 * @problem_address https://leetcode.com/problems/unique-binary-search-trees/
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
    int numTrees(int n) {
        if (n <= 1) {
            return 1;
        }
        vector<int> cache(n + 1, 0);
        cache[0] = cache[1] = 1;
        for (int i = 2; i <= n; i++) {
            for (int k = 1; k <= i; k++) {
                cache[i] += cache[k - 1] * cache[i - k];
            }
        }
        return cache[n];
    }
};

int main(int argc, char *argv[]) { return 0; }
