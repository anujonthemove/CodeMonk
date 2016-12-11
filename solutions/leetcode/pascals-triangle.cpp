/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id pascals-triangle
 * @problem_address https://leetcode.com/problems/pascals-triangle/
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
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> rows = {{1}, {1, 1}};
        if (numRows <= 2) {
            rows.erase(rows.begin() + numRows, rows.end());
            return rows;
        }
        for (int numRow = 3; numRow <= numRows; numRow++) {
            vector<int> preRow = rows[numRow - 2];
            vector<int> row{1};
            for (int i = 1; i < numRow - 1; i++) {
                row.push_back(preRow[i - 1] + preRow[i]);
            }
            row.push_back(1);
            rows.push_back(row);
        }
        return rows;
    }
};

int main(int argc, char *argv[]) { return 0; }
