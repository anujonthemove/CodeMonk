/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id intersection-of-two-linked-lists
 * @problem_address
 *https://leetcode.com/problems/intersection-of-two-linked-lists/
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int count = 0;
        ListNode *currA = headA, *currB = headB;
        while (currA && currB) {
            if (count >= 3) {
                break;
            }
            if (currA == currB) {
                return currA;
            }
            currA = currA->next;
            currB = currB->next;
            if (!currA) {
                count++;
                currA = headB;
            }
            if (!currB) {
                count++;
                currB = headA;
            }
        }
        return NULL;
    }
};

int main(int argc, char *argv[]) { return 0; }
