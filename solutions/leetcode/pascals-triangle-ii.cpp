/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id pascals-triangle-ii
 * @problem_address https://leetcode.com/problems/pascals-triangle-ii/
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
    vector<int> getRow(int rowIndex) {
        if (rowIndex == 0) {
            return vector<int>{1};
        }
        vector<int> row{1, 1};
        if (rowIndex == 1) {
            return row;
        }
        for (int index = 2; index <= rowIndex; index++) {
            vector<int> nextRow{1};
            for (int i = 1; i < index; i++) {
                nextRow.push_back(row[i - 1] + row[i]);
            }
            nextRow.push_back(1);
            row = nextRow;
        }
        return row;
    }
};

int main(int argc, char *argv[]) { return 0; }
