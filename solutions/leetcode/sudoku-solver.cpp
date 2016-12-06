/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id sudoku-solver
 * @problem_address https://leetcode.com/problems/sudoku-solver/
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
    set<char> getOptions(int x, int y, vector<vector<char>> &board) {
        set<char> charSet;
        for (int j = 0; j < 9; j++) {
            charSet.insert(board[x][j]);
        }
        for (int i = 0; i < 9; i++) {
            charSet.insert(board[i][y]);
        }
        int baseX = (x / 3) * 3, baseY = (y / 3) * 3;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                charSet.insert(board[baseX + i][baseY + j]);
            }
        }
        charSet.erase('.');
        set<char> options;
        for (int i = 0; i < 9; i++) {
            char ch = '1' + i;
            if (charSet.find(ch) == charSet.end()) {
                options.insert(ch);
            }
        }
        return options;
    }
    void solveSudoku(vector<vector<char>> &board) {
        vector<vector<int>> blanks;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    blanks.push_back(vector<int>{i, j});
                }
            }
        }
        solve(board, blanks);
    }
    bool solve(vector<vector<char>> &board, vector<vector<int>> &blanks) {
        if (blanks.size() <= 0) {
            return true;
        }
        vector<int> blank = blanks.back();
        blanks.erase(blanks.begin() + blanks.size() - 1);
        int x = blank[0], y = blank[1];
        set<char> options = getOptions(x, y, board);
        for (char option : options) {
            board[x][y] = option;
            if (solve(board, blanks)) {
                return true;
            }
        }
        board[x][y] = '.';
        blanks.push_back(blank);
        return false;
    }
};

int main(int argc, char *argv[]) { return 0; }
