/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id reverse-linked-list
 * @problem_address https://leetcode.com/problems/reverse-linked-list/
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
    ListNode *reverseList(ListNode *head) {
        ListNode *root = new ListNode(0), *curr = head;
        while (curr) {
            ListNode *next = curr->next;
            curr->next = root->next;
            root->next = curr;
            curr = next;
        }
        return root->next;
    }
};

int main(int argc, char *argv[]) { return 0; }
