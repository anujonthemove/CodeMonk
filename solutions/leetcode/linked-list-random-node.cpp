/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id linked-list-random-node
 * @problem_address https://leetcode.com/problems/linked-list-random-node/
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
  private:
    ListNode *head;

  public:
    /** @param head The linked list's head.
     Note that the head is guaranteed to be not null, so it contains at least
     one node. */
    Solution(ListNode *head) { this->head = head; }

    /** Returns a random node's value. */
    int getRandom() {
        int count = 1, chosen;
        ListNode *curr = head;
        while (curr) {
            if (rand() % count == 0) {
                chosen = curr->val;
            }
            curr = curr->next;
            count++;
        }
        return chosen;
    }
};

int main(int argc, char *argv[]) { return 0; }
