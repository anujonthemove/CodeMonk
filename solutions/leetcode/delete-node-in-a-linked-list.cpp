/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id delete-node-in-a-linked-list
 * @problem_address https://leetcode.com/problems/delete-node-in-a-linked-list/
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
    void deleteNode(ListNode *node) {
        ListNode *pre, *now = node;
        while (now->next) {
            now->val = now->next->val;
            pre = now;
            now = now->next;
        }
        pre->next = NULL;
    }
};

int main(int argc, char *argv[]) { return 0; }
