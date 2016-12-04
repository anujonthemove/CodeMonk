/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id add-two-numbers
 * @problem_address https://leetcode.com/problems/add-two-numbers/
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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *head = new ListNode(0), *curr = head;
        int carry = 0;
        while (l1 || l2) {
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            curr->next = new ListNode(sum % 10);
            carry = sum / 10;
            l1 = (l1 ? l1->next : NULL);
            l2 = (l2 ? l2->next : NULL);
            curr = curr->next;
        }
        if (carry) {
            curr->next = new ListNode(carry);
        }
        return head->next;
    }
};

int main(int argc, char *argv[]) {
    ListNode *l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);
    ListNode *l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);
    Solution solution;
    ListNode *l = solution.addTwoNumbers(l1, l2);
    while (l) {
        cout << l->val;
        l = l->next;
    }
    cout << endl;
    return 0;
}
