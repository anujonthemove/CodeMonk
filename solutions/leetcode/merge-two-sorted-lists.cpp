/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id merge-two-sorted-lists
 * @problem_address https://leetcode.com/problems/merge-two-sorted-lists/
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

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
  public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode *head = new ListNode(0), *curr = head, *curr1 = l1,
                 *curr2 = l2;
        while (curr1 && curr2) {
            int v1 = curr1->val, v2 = curr2->val;
            if (v1 <= v2) {
                curr->next = new ListNode(v1);
                curr1 = curr1->next;
            } else {
                curr->next = new ListNode(v2);
                curr2 = curr2->next;
            }
            curr = curr->next;
        }
        ListNode *curr3 = curr1 ? curr1 : curr2;
        while (curr3) {
            curr->next = new ListNode(curr3->val);
            curr = curr->next;
            curr3 = curr3->next;
        }
        return head->next;
    }
};

int main(int argc, char *argv[]) { return 0; }
