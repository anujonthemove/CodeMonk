/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id queue-reconstruction-by-height
 * @problem_address
 *https://leetcode.com/problems/queue-reconstruction-by-height/
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
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>> &people) {
        int n = people.size();
        sort(people.begin(), people.end());
        vector<pair<int, int>> res(n, pair<int, int>(-1, -1));
        for (int i = 0; i < n; i++) {
            pair<int, int> person = people[i];
            int ahead = person.second;
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (count == ahead) {
                    while (j < n) {
                        if (res[j].first == -1) {
                            break;
                        } else {
                            j++;
                        }
                    }
                    res[j] = person;
                    break;
                }
                if (res[j].first == -1 || res[j].first == person.first) {
                    count++;
                }
            }
        }
        return res;
    }
};

int main(int argc, char *argv[]) { return 0; }
