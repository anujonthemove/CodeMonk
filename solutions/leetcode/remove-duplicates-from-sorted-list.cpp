/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id remove-duplicates-from-sorted-list
 * @problem_address
 *https://leetcode.com/problems/remove-duplicates-from-sorted-list/
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
    ListNode *deleteDuplicates(ListNode *head) {
        if (!head) {
            return NULL;
        }
        ListNode *curr = head->next, *pre = head;
        while (curr) {
            if (curr->val == pre->val) {
                pre->next = curr->next;
                curr = curr->next;
            } else {
                pre = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};

int main(int argc, char *argv[]) { return 0; }
