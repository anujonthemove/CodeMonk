/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id valid-sudoku
 * @problem_address https://leetcode.com/problems/valid-sudoku/
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
    bool isValidRow(vector<char> &row) {
        set<char> chs;
        for (char ch : row) {
            if (ch == '.') {
                continue;
            }
            if (ch <= '0' || ch > '9') {
                return false;
            }
            if (chs.find(ch) != chs.end()) {
                return false;
            }
            chs.insert(ch);
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>> &board) {
        for (int i = 0; i < 9; i++) {
            vector<char> row;
            for (int j = 0; j < 9; j++) {
                row.push_back(board[i][j]);
            }
            if (!isValidRow(row)) {
                return false;
            }
        }
        for (int j = 0; j < 9; j++) {
            vector<char> row;
            for (int i = 0; i < 9; i++) {
                row.push_back(board[i][j]);
            }
            if (!isValidRow(row)) {
                return false;
            }
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                vector<char> row;
                for (int k1 = 0; k1 < 3; k1++) {
                    for (int k2 = 0; k2 < 3; k2++) {
                        row.push_back(board[3 * i + k1][3 * j + k2]);
                    }
                }
                if (!isValidRow(row)) {
                    return false;
                }
            }
        }
        return true;
    }
};

int main(int argc, char *argv[]) { return 0; }
