/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id palindrome-linked-list
 * @problem_address https://leetcode.com/problems/palindrome-linked-list/
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
    bool isPalindrome(ListNode *head) {
        if (!head || !head->next) {
            return true;
        }
        ListNode *pre = NULL, *slow = head, *fast = head->next;
        while (fast) {
            ListNode *next = slow->next;
            slow->next = pre;
            pre = slow;
            slow = next;
            if (fast->next) {
                fast = fast->next;
            } else {
                break;
            }
            if (fast->next) {
                fast = fast->next;
            } else {
                slow = slow->next;
                break;
            }
        }
        while (pre && slow) {
            if (pre->val != slow->val) {
                return false;
            }
            pre = pre->next;
            slow = slow->next;
        }
        return true;
    }
};

int main(int argc, char *argv[]) { return 0; }
