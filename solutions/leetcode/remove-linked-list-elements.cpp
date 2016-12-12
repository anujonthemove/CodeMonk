/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id remove-linked-list-elements
 * @problem_address https://leetcode.com/problems/remove-linked-list-elements/
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
    ListNode *removeElements(ListNode *head, int val) {
        ListNode *root = new ListNode(0);
        root->next = head;
        ListNode *pre = root, *now = head;
        while (now) {
            if (now->val == val) {
                pre->next = now->next;
            } else {
                pre = now;
            }
            now = now->next;
        }
        return root->next;
    }
};

int main(int argc, char *argv[]) { return 0; }
