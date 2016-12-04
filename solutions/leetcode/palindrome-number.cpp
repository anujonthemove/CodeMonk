/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id palindrome-number
 * @problem_address https://leetcode.com/problems/palindrome-number/
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
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else if (x == 0) {
            return true;
        }
        int count = 0, tmp = x;
        while (tmp > 0) {
            count++;
            tmp /= 10;
        }
        tmp = 0;
        for (int i = 0; i < count / 2; i++) {
            tmp = tmp * 10 + x % 10;
            x /= 10;
        }
        if (count % 2 != 0) {
            x /= 10;
        }
        return tmp == x;
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    cout << solution.isPalindrome(232) << endl;
    return 0;
}
