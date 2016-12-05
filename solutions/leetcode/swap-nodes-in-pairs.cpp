/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id swap-nodes-in-pairs
 * @problem_address https://leetcode.com/problems/swap-nodes-in-pairs/
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
    ListNode *swapPairs(ListNode *head) {
        ListNode *preHead = new ListNode(0);
        preHead->next = head;
        ListNode *pre = preHead;
        while (true) {
            ListNode *first = pre->next;
            if (!first) {
                break;
            }
            ListNode *second = first->next;
            if (!second) {
                break;
            }
            pre->next = second;
            first->next = second->next;
            second->next = first;
            pre = first;
        }
        return preHead->next;
    }
};

int main(int argc, char *argv[]) { return 0; }
