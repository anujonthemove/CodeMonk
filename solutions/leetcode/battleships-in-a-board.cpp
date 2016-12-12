/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id battleships-in-a-board
 * @problem_address https://leetcode.com/problems/battleships-in-a-board/
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
    int countBattleships(vector<vector<char>> &board) {
        int m = board.size();
        if (m <= 0) {
            return 0;
        }
        int n = board[0].size(), count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                char ch = board[i][j];
                if (ch == 'X' &&
                    !((i > 0 && board[i - 1][j] == 'X') ||
                      (j > 0 && board[i][j - 1] == 'X'))) {
                    count++;
                }
            }
        }
        return count;
    }
};

int main(int argc, char *argv[]) { return 0; }
