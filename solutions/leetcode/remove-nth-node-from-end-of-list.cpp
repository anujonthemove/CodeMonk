/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id remove-nth-node-from-end-of-list
 * @problem_address
 *https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *slow = head, *fast = head, *pre;
        for (int i = 1; i <= n; i++) {
            fast = fast->next;
        }
        while (fast) {
            fast = fast->next;
            pre = slow;
            slow = slow->next;
        }
        if (slow == head) {
            return head->next;
        }
        pre->next = slow->next;
        return head;
    }
};

int main(int argc, char *argv[]) {
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    Solution solution;
    head = solution.removeNthFromEnd(head, 2);
    while (head) {
        cout << head->val << endl;
        head = head->next;
    }
    return 0;
}
