/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id delete-duplicate-value-nodes-from-a-sorted-linked-list
 * @problem_address
 *https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list
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

Node *RemoveDuplicates(Node *head) {
    Node *pre = NULL, *now = head;
    while (now != NULL) {
        if (pre != NULL) {
            if (pre->data == now->data) {
                pre->next = now->next;
            } else {
                pre = now;
            }
        } else {
            pre = now;
        }
        now = now->next;
    }
    return head;
}

int main(int argc, char *argv[]) { return 0; }
